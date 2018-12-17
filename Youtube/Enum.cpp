// enum, just give names to certain values

#include<iostream>

enum Example : char
{
	A = 5, B, C = 8  // default enum is 32-bit 
};


int main()
{
	Example value = B;
	if (value == 1)
	{
		// do something
	}
	std::cin.get();
}