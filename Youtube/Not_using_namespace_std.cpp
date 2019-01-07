#include<iostream>
#include<string>

namespace apple    // it needs implicit conversion
{
	void print(const std::string& text)
	{
		std::cout << text << std::endl;
	}
}

namespace orrange   // if both exist, this one is a better choice
{
	void print(const char* text)
	{
		std::string temp = text;
		std::reverse(temp.begin(), temp.end());
		std::cout << temp << std::endl;
	}
}

using namespace apple;
using namespace orrange;


int main()
{
	print("Hello!");  // "Hello" is a const char array, actually not string
	std::cin.get();
}