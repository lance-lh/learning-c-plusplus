// break, quit current loop

#include<iostream>
#include"log.h"

int main()
{
	for (int i = 0; i < 5; i++)
	{
		if ((i + 1) % 2 == 0) // if (i % 2 != 0)
			break; // if the first odd i appears, quit the whole loop
		Log("Hello World!");
		std::cout << i << std::endl;
	}
	std::cin.get();
}