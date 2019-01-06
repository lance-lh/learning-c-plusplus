// when you create a C++ standard array, it provides you a fixed size, 
// pre-defined data type array, that's what we called static.
// standard array is stored on the stack 
// while vector is stored on the heap, because vector is a changeable array, it needs heap allocation
// standard array has boundary check for you optionally

#include<iostream>
#include<array>

void PrintArray(int* array, unsigned int size)
{
	for (int i = 0; i < size; i++)
	{

	}
}

int main()
{
	std::array<int, 5> data; //&data, it is a class, so we can keep track of its size

	// pay attention that this size is not the real memory size it occupies
	int arraysize = data.size();
	std::cout << arraysize << std::endl;

	data[0] = 2;
	data[4] = 1;


	std::cin.get();
}