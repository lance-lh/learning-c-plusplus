// class
#include<iostream>

#define LOG(x) std::cout << x << std::endl;

class Player  // class default is private state
{
public:       // make it visible
	int x, y;
	int speed;

	void Move(int xa, int ya)  // functionality inside of class is called method
	{
		x += xa * speed;
		y += ya * speed;
	}
};

/*
struct Player  // struct default is public state
{
	int x, y;
	int speed;

	void Move(int xa, int ya) 
	{
		x += xa * speed;
		y += ya * speed;
	}
};
*/

int main()
{
	Player player;
	player.x = 5;
	player.Move(-1, 1);

	std::cin.get();
}