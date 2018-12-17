#include<iostream>
#include"log.h"

int main()
{
	/*
	int x = 6;
	bool comparisonResult = x == 5;
	if (comparisonResult) // if(1)
	{
	Log("Hello World!");
	}
	*/
	
	//const char* ptr = "Hello";
	//const char* ptr = nullptr;
	const char* ptr = "Hello";
	if (ptr) // if(ptr!=nullptr)
		Log(ptr);
	// this else if is never be called, here just its usage.
	else if (ptr == "Hello")
		Log("Hello");
	else
		Log("ptr is a nullptr.");

	std::cin.get();
}