// view class diagram to see the relationship between them

#include<iostream>
#include<string>

class Printable
{
public:
	virtual std::string GetClassName() = 0;
};


class Entity : public Printable
{
public:
	virtual std::string GetName()
	{
		return "Entity";
	}

	std::string GetClassName() override { return "Entity"; }
										
};

class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name)  // constructor
		: m_Name(name) {}

	std::string GetName() override   //subclass implement pure virtual function.
	{
		return m_Name;
	}

	std::string GetClassName() override { return "Player"; }
};

void PrintName(Entity* entity)  // depend on type, here is Entity*
{
	std::cout << entity->GetName() << std::endl;
}

class A : public Printable
{
public:
	std::string GetClassName() override { return "A"; }
};

void Print(Printable* obj)
{
	std::cout << obj->GetClassName() << std::endl;
}

int main()
{
	// use new to ctreate and initialize object with dynamic storage duration
	Entity* e = new Entity();
	//PrintName(e); // output Entity

	Player* p = new Player("Cherno");
	//PrintName(p);  //output Entity

	Print(e);
	Print(p);
	Print(new A());
	std::cin.get();
}