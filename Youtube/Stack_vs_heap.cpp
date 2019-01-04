// - to be clear, each program/process on our computer has its own stack/heap
// -each thread will create its own stack when it gets created, whereas the heap is shared amongst all threads?

// allocating memory on heap is a bunch of whole thing, whereas allocating memory on the stack is like one CPU instruction
// when to use stack or heap
// new is actually call function malloc
#include<iostream>
#include<string>

struct Vector3
{
	float x, y, z;

	Vector3()
		: x(10), y(11), z(12) {}
};

int main()
{
	{	// stack memory allocation
		int value = 5; // &value, Memory address: 0x0093FC38 (9698360), value: 05 00 00 00  
		int array[5]; // array is actually a pointer, Memory address: 0x0093FC1C (9698332), value: 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00 
		array[0] = 1;
		array[1] = 2;
		array[2] = 3;
		array[3] = 4;
		array[4] = 5;
		Vector3 vector;  // &vector, Memory address: 0x0093FC08, 00 00 20 41 00 00 30 41 00 00 40 41 
	}  // for stack variable, if variable is outside the current scope, it gets freed
	//  00 00 20 41 00 00 30 41 00 00 40 41 cc cc cc cc cc cc cc cc 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00 cc cc cc cc cc cc cc cc 05 00 00 00
	// we can see that stack memory pointer moves from higher address to lower address
	// a stack allocation is extremely fast, it's literally like one CPU instruction. All we do is we move the stack pointer and then we return the address of that stack pointer.
	

	// heap memory allocation
	int* hvalue = new int;
	*hvalue = 5;
	int* harray = new int[5];   // 0x00192E40
	harray[0] = 1;  // 0x0018CB0C
	harray[1] = 2;
	harray[2] = 3;
	harray[3] = 4;
	harray[4] = 5;
	Vector3* hvecotr = new Vector3();  // 0x00192274

	// use new keyword to allocate heap memory
	// use delete to manually free heap memory
	// heap memory address grow from lower address to higher address
	delete hvalue;
	delete[] harray;
	delete hvecotr;

	std::cin.get();
}