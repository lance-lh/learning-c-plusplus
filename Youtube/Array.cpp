// a buntch of variables
// array stores data contiguously (row)
// watch memory by enter &e

#include<iostream>

class Entity
{
public:
	//int example[5];  //&e
	int* example = new int[5]; //&e, then copy the former 4 bytes addr, and conduct endian convertion

	Entity()
	{
		/*int a[5];
		int count = sizeof(example) / sizeof(int); // 5*/
		for (int i = 0; i < 5; i++)
			example[i] = 2;
	}
};

int main()
{
	Entity e;
	// attention the lifetime
	
	//int example[5];  // 20 bytes, created on the stack
					// it will get destroyed before the end of curly brace
	/*for (int i = 0; i < 5; i++)
		example[i] = 2;*/
	/*
	int* another = new int[5]; // created on the heap
	for (int i = 0; i < 5; i++)
		another[i] = 2;

	delete[] another;  // delete array memory created by new
	*/

	//int* ptr = example;
	/*example[0] = 2;
	example[1] = 2;
	example[2] = 2;
	example[3] = 2;
	example[4] = 4;*/

	/*
	for (int i = 0; i < 5; i++)
		example[i] = 2;
	
	example[2] = 5;
	*(ptr + 2) = 6;

	//example[-1] = 1; // memory access violation
	//example[5] = 6;

	std::cout << example[0] << std::endl;
	std::cout << example << std::endl; // example is a pointer type, print out the memory address
	*/

	std::cin.get();
}