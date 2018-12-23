// the main purpose of new is to allocate memory on the heap specially
// The new expression attempts to allocate storage and then attempts to construct and initialize either a single unnamed object, or an unnamed array of objects in the allocated storage. The new-expression returns a prvalue pointer to the constructed object or, if an array of objects was constructed, a pointer to the initial element of the array.
// https://en.cppreference.com/w/cpp/language/new

#include<iostream>
#include<string>

using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	Entity() : m_Name("Unknown") {}  //default constructor
	Entity(const String& name) : m_Name(name) {}

	const String& GetName() const { return m_Name; }
};

int main()
{
	int a = 2;
	int* b = new int[50]; // remember new returns a pointer, 200bytes

	Entity* e = new Entity(); // not only allocate the memory, but alse calls the constructor, kind of like (Entity*)malloc(sizeof(Entity) in C, but the latter one does not call the constructor
	 
	delete e; // free() in C, but delete also calls the destructor
	delete[] b; // when free the array memory created by new square brackets
	std::cin.get();
}