// set breakpoint to identify the endian mode
// is big endian or not
// this code validates our machine is based on little-endian

#include<iostream>

int main()
{
	int a = 0x1234; // normally 12 is high byte
	char b = *(char *)&a;  //convert int to one byte char, that is, fetch low addr and put it into b as if condition
	if (b == 0x12)   // dec 52 -> hex 34
		return true;
	else
		return false;
	std::cin.get();
}


