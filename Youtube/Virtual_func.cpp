#include<iostream>
#include<string>

class Entity
{
public:
	virtual std::string GetName()  // use virtual to not overwite subclass method
	{
		return "Entity";
	}
};

class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name)  // constructor
		: m_Name(name) {}

	std::string GetName() override
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
	Entity* e = new Entity();
	//std::cout << e->GetName() << std::endl;
	PrintName(e); // output Entity

	Player* p = new Player("Cherno");
	//std::cout << p->GetName() << std::endl;
	PrintName(p);  //output Entity

	std::cin.get();
}