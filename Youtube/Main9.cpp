// reference

#include<iostream>

#define LOG(x) std::cout << x << std::endl;

void Increment(int& value)
{
	value++;
}

int main()
{
	int a = 5;
	/*
	int& ref = a;  // ref is alias name of a, only one variable when compiling, that is a
	ref = 2;
	LOG(a);
	*/
	int b = 8;
	int* ref = &a;
	*ref = 2;  //a = 2
	ref = &b;
	*ref = 1;  // b = 1

	LOG(a);
	LOG(b);

	Increment(a);
	LOG(a);
	

	std::cin.get();
}