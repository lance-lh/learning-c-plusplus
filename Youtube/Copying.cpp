// strcpy includes the null termination character
// keep in mind that always pass your objects by const&

#include<iostream>
#include<string>

struct Vector2
{
	float x, y;
}; 

class String // string is made up of an array of characters
{
private:
	char* m_Buffer; // point to the buffer of chars
	unsigned int m_Size; // keep track of how big the string is
public:
	String(const char* string) // constructor
	{
		m_Size = strlen(string); // calculate how long the string is, so that we can copy the data from the string into the buffer
		m_Buffer = new char[m_Size + 1]; // decide how big of the buffer is
		memcpy(m_Buffer, string, m_Size);
		m_Buffer[m_Size] = 0;
	}

	String(const String& other) // copy constructor
		: m_Size(other.m_Size) // it's just an integer, so shallow copy is okay
	{
		std::cout << "Copied String!" << std::endl;

		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}
	/*	: m_Buffer(other.m_Buffer), m_Size(other.m_Size)  // default copy constructor
	{
	}*/

	// or use another way to define copy constructor
	/*String(const String& other)
	{
		memcpy(this, &other, sizeof(String));
	}
	*/

	~String() // destructor
	{
		delete[] m_Buffer;
	}

	char& operator[](unsigned int index)  // operator overload
	{
		return m_Buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;
}

// if reference is not used, we get three string copies happening
// anchor3, anchor4, anchor5 totally three times copying
// what's actually happening is every time we copy a string we allocate memory on the heap, copy all that memory and then at the end of it, we free it. That's completely unnecessary.
void PrintString(const String& string)  // anchor2 
{
	std::cout << string << std::endl;
}

int main()
{
	/*int a = 2;
	int b = a;
	b = 3;  // a remains 2
	*/
	
	/*Vector2 a = { 2, 3 };
	Vector2 b = a;
	b.x = 5;  // a, b are two separate Vector2s 
	*/

	/*Vector2* a = new Vector2();
	Vector2* b = a; // actually copy the pointer
	b->x = 2;  // a and b are both pointing to the same memory address
	*/

	String string = "Cherno"; // m_Buffer = 0x00a517d0
	String second = string;  // anchor3, shallow cpoy a string, m_Buffer = 0x00a517d0
	// these two char pointers point to the same address

	second[2] = 'a';

	PrintString(string);  // anchor4
	PrintString(second);  // anchor5

	/*std::cout << string << std::endl;
	std::cout << second << std::endl;
	*/

	std::cin.get();
} // anchor 1, when the code run to anchor1, it tries to delete the buffer twice so we are trying to free the same block of memory twice. that's why we get a crash because the memory has already been freed it's not ours, we can not free it again

// what we need is deep copy, copy the entire object
// copy constructor is a constructor that gets called for that second string when you actually copy it
// when you assign a string to an object that is also a string when you try to create a new variable and you assign it with another variable which has the same type as a variable that you're actually creating you're copying that variable and thus you're calling something called the copy constructor