// inhertance

#include <iostream>

class Entity
{
public:
	float X, Y;  // 4 * 2 = 8 bytes

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}
};
// Player is not only a class type, but also an Entity type
class Player : public Entity
{
public:
	const char* Name;  // 4 bytes
	/*float X, Y;

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}*/

	void PrintName()
	{
		std::cout << Name << std::endl;
	}
};


int main()
{
	std::cout << sizeof(float) << std::endl;
	std::cout << sizeof(const char*) << std::endl;
	std::cout << sizeof(char) << std::endl;
	std::cout << sizeof(Entity) << std::endl;
	std::cout << sizeof(Player) << std::endl;
	Player player;
	player.Move(5,5); // inherited parent class 
	player.X = 2;
	//player.PrintName(); // new functionality in subclass
	std::cin.get();
}