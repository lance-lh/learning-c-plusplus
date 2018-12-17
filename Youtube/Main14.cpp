// local static

#include<iostream>

void Function()
{
	static int i = 0; // 1 2 3 4 5
	// int i = 0; // 1 1 1 1 1
	i++;
	std::cout << i << std::endl;
}

int main()
{
	Function();
	Function();
	Function();
	Function();
	Function();
	std::cin.get();
}