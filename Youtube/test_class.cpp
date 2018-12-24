#include<iostream>
#include<string>

class Entity
{
public:
	int x, y;

	Entity() {}

	Entity(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	int GetX() const  // we are not allowed to modify the class
	{
		const Entity* e = this;  // so this has to be const type
		return x;
	}
};

int  main()
{
	Entity e;
	e.GetX();
	std::cin.get();
}