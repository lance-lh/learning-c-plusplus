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
		Entity entity("Cherno");
		e = &entity;  // when the code runs to the next line of anchor1, content of e is freed because of scope 
		std::cout << entity.GetName() << std::endl;
	}  // anchor1
	std::cin.get();
}