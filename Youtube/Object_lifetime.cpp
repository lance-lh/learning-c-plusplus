// the stack-based variable gets destroyed as soon as we go out of the scope
#include<iostream>
#include<string>

class Entity
{
public:
	Entity()
	{
		std::cout << "Created Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}
};

// funny story, if you find/create a fake object, your lifetime will be very short
int* CreateArray()
{
	int array[50];  // declare it on the stack
	return array; // it returns a pointer to that stack memory, the stack memory gets cleared as soon as we go out of scope
	// it is a mistake that people will create a stack-based variable and try to return a pointer to it, not realizing that once that function ends and you go out of scope that variables done
}

int main()
{
	int* a = CreateArray();

	{
		//Entity e;
		Entity* e = new Entity(); // set breakpoint, even run pass anchor1 to anchor2
	} // anchor1

	std::cin.get();  // anchor2
}