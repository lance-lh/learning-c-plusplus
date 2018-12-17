// for loop

#include<iostream>
#include"log.h"

int main()
{
	
	int i = 0; //first declaration, since it only runs one time
	bool condition = true;
	for( ;condition; )
	{
		Log("Hello World!");
		i++;
		if (i > 4)
			condition = false;
	}


	/*
	for (int i = 0; i < 5; i++)
		Log("Hello World!");
	*/
	
	std::cin.get();
}