/*
we basically have two choices here and the difference between the choices is where the memory comes from which memory were actually going to be creating our object in
when we create an object in C++, it needs to occupy some memory even if we write a class that is completely empty, no class members or nothing like that it has to occupy at least one byte of memory
stack objects for example, their lifetime is actually controlled by the scope that they declared and as soon as that variable goes out of scope, that's it the memory is free because when that scope ends the stack pops and anything that scope frame in that stack frame that gets freed
once you allocated an object in that heap, it's up to you to determine when to free that block of memory
*/


#include<iostream>
#include<string>

using String = std::string;   // use standard string class

class Entity
{
private:
	String m_Name;
public:
	Entity() 
		: m_Name("Unkown")  //constructor 
	{
	}
	Entity(const String& name) 
		: m_Name(name) 
	{
	}

	const String& GetName() const 
	{ 
		return m_Name; 
	}
};

int main()
{
	Entity* e;
	{  // use curly brace to create a scope
		//Entity entity;  // calling the default constructor
		//Entity entity("Cherno");
		Entity* entity = new Entity("Cherno"); // we allocate memory on the heap, call the constructor and this new entity actually returns an entity pointer it returns the location on the heap where this entity has actually been allocated
		//e = &entity;  // when the code runs to the next line of anchor1, content of e is freed because of scope 
		e = entity; // when the code runs to the next line of anchor2, content of e is freed because of heap memory is freed
		//std::cout << entity.GetName() << std::endl;
		std::cout << entity->GetName() << std::endl;  // since entity is a Entity pointer, you should dereference first, (*entity).GetName()
		//delete entity; // free heap memory
	}  // anchor1
	
	std::cin.get();
	delete e; // anchor2
}