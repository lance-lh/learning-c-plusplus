// pointer

#include<iostream>

#define LOG(x) std::cout << x << std::endl;

int main()
{
	//int var = 8;

	/*
	void* ptr = &var;  //fetch address &var = 0x00eff7a0 {8}
	// int* ptr = &var; that's ok.
	// double* ptr = (double*)&var, that' fine.
	*ptr = 10; // that's wrong, because cannot convert int to void* type
	*/

	/*
	int* ptr = &var;
	*ptr = 10;
	LOG(var);  // var is changed to be 10
	*/

	//allocate 8 bytes of memory and return a pointer to the beginning of that block of that memory.
	char* buffer = new char[8];
	// Sets the first num bytes of the block of memory pointed by ptr to the specified value 
	memset(buffer, 10, 8); // 0a 0a 0a 0a 0a 0a 0a 0a
	// write string to stdout
	//puts(buffer);

	char** ptr = &buffer; 
	/*
	ptr = &buffer : 0x009afc80
	holds fake address because of endianness c0 00 20 00
	*ptr = 0x00 20 00 c0
	**ptr = 0a 0a 0a 0a 0a 0a 0a 0a
	*/

	delete[] buffer; // delete allocated memory in heap
	std::cin.get();
}