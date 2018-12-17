// static for classes and structs

#include<iostream>

struct Entity
{
	//int x, y;
	static int x, y; 

	//void Print()
	static void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};

//int Entity::x;
//int Entity::y;

int main()
{
	Entity e;
	e.x = 2;
	e.y = 3;

	//Entity e1 = { 5,8 };
	Entity e1;
	e1.x = 5;
	e1.y = 8; // due to static, static variable point to same memory, they are shared.

	e.Print();
	e1.Print();
	std::cin.get();
}