// while loop (just one condition)

#include<iostream>
#include"log.h"

int main()
{
	for (int i = 0; i < 5; i++)
	{
		Log("Hello World!");
	}

	Log("=========================="); //just to seperate

	int i = 0;
	while (i < 5)
	{
		Log("Hello World!");
		i++;
	}

	Log("=========================="); //just to seperate

	i = 0;  // not int i = 0; or it will reprt error
			// redefinition: multiple initialization
	do
	{
		Log("Hello World!");
		i++;
	} while (i < 5);

	std::cin.get();
}