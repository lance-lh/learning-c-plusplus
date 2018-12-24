// this is only accessible to us through a member function, member function meaning a function that belongs to a class so a method and inside a method we can reference this and what this is is a pointer to the current object instance that the method belongs to 
// we first need to instantiate an object and then call the method so the method has to be called with a valid object and the this keyword is a pointer to that object 

#include<iostream>
#include<string>

void PrintEntity(Entity* e); // declare first
void PrintEntity1(const Entity& e); 

class Entity
{
public:
	int x, y;

	Entity(int x, int y)
	{
		//Entity* e = this;  // in fact, it means Entity* const type
		this->x = x;
		this->y = y;

		Entity& e = *this;

		//PrintEntity(this);  // pass the current instance to the class
		PrintEntity1(*this);
		delete this;  // avoid doing this because you are freeing memory from a member function, and if you decide to ever access any member data afer you call delete this you're going to explode because the memory had been freed 
	}

	int GetX() const  // we are not allowed to modify the class
	{
		const Entity* e = this;  // so this has to be const type

		return x;
	}
};

void PrintEntity(Entity* e)
{
	//print sth
}

void PrintEntity1(const Entity& e)
{
	//print sth
}

int  main()
{
	Entity e;
	std::cin.get();

}