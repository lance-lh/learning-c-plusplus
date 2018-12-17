#include<iostream>
#include<string>

class Entity
{
public:
	virtual std::string GetName() = 0;  //indicate a pure virtual func
	// it has to be implemented in a subclass
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
};

void PrintName(Entity* entity)  // depend on type, here is Entity*
{
	std::cout << entity->GetName() << std::endl;
}

int main()
{
	// use new to ctreate and initialize object with dynamic storage duration
	Entity* e = new Player("");
	PrintName(e); // output Entity

	Player* p = new Player("Cherno");
	PrintName(p);  //output Entity

	std::cin.get();
}