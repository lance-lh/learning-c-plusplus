// constructor and deconstructor

#include<iostream>

class Entity
{
public:
	float X, Y;
	//in fact, it has default initialization, but it would be better to manually initialize it.
	Entity()   // define a constructor to help initialize
	{
		X = 0.0f;
		Y = 0.0f;
		std::cout << "Created Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}

	/*Entity(float x, float y)
	{
		X = x;
		Y = y;
	}*/

	/*void Init()
	{
		X = 0.0f;
		Y = 0.0f;
	}*/

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}

};


/*class Log
{
public:
	Log() = delete;  // cancel the default initializer

	static void Write()
	{

	}
};*/

void Function()
{
	Entity e;
	e.Print();
	e.~Entity();
}

int main()
{
	
	//Log::Write();
	//Log l;  // becauses we delete the default initializer at line 38
	
	//Entity e;
	//Entity e(2.0f, 1.0f);
	//e.Init();
	//std::cout << e.X << std::endl;
	//e.Print();

	//Entity e1;
	//e1.Init();
	Function();
	std::cin.get();
}