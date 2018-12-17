// continue, go to next loop condition

#include<iostream>
#include"log.h"

int main()
{
	for (int i = 0; i < 5; i++)
	{
		if (i % 2) // if (i % 2 != 0)
			continue; // when i = 1,3, run continue and go to next loop that is, neglect Log() 
		Log("Hello World!");
		std::cout << i << std::endl;
	}
	std::cin.get();
}