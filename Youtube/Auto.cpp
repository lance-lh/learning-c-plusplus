// use auto if the data type is too long
#include<iostream>
#include<string>
#include<vector>

std::string GetName()
{
	return "superhero";
}


int main()
{
	std::vector<std::string> strings;
	strings.push_back("Apple");
	strings.push_back("Orange");

	for (std::vector<std::string>::iterator it = strings.begin();
			it != strings.end(); it++)
	//for (auto it = strings.begin(); it != strings.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	auto name = GetName();
	auto a = "Cherno";  // a is a const char* pointer

	auto b = a;
	std::cout << b << std::endl;
	std::cin.get();
}