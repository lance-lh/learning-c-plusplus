// string is an array of characters, letters, numbers, symbols
// string of text
// char pointer

#include<iostream>
#include<string>

// passing string to func
// this is a reference meaning that it wouldn't get copied and const means we're not to modify it here
void PrintString(const std::string& string)
{
	//string += "h";
	std::cout << string << std::endl;
}


int main()
{
	// strings are immutable in the sense that you can't just extend a string and make it bigger because this is a fixed alllocated block of memory if you wanna have a bigger string you need to perform a brand new allocation and delete the old string

	// const means you cannot change the content
	//const char* name = "Lucy"; // char* name = "sth" is ok.

	char* name = "Lucy";  // 4c 75 63 79 00, 00 indicates NULL to end the string

	std::string name1 = "Tom"; //+ "hello"; // a const string
	name1 += "hello";
	std::string name1 = std::string("Tom") + "hello"; // or calling a srting constructor

	//find() returns the position
	bool contains = name1.find("lo") != std::string::npos;

	char name2[5] = { 'L','u','c','y','\0' };
	
	std::cout << name1 << std::endl; // standard string
	
	/*char *s;
	strlen(s);
	strcpy();
	name1.size();*/

	name[2] = 'a'; // set breakpoint here
	// https://en.wikipedia.org/wiki/ASCII

	std::cin.get();
}