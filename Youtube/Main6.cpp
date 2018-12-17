// return
// return a value or terminate the execution of a func

#include<iostream>
#include"log.h"

int main()
{
	for (int i = 0; i < 5; i++)
	{
		if ((i + 1) % 2 == 0) // if (i % 2 != 0)
			return 0;  // jump to int main() 2nd curly brace
		Log("Hello World!");
		std::cout << i << std::endl;
	}
	std::cin.get();
}