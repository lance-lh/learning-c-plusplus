// a series of characters in between two double quotes
// string literals are stored in a read-only section of memory
#include<iostream>
#include<string>
#include<stdlib.h>  // includes some c functions

int main()
{
	using namespace std::string_literals;
	std::string name0 = std::string("Cherno") + "hello";  // use constructor
	std::string name5 = "Cherno"s + "hello"; // s means an operator function that actually returns a string
	std::u32string name6 = U"Cherno"s + U" hello";

	const char* example = R"(line1
Line2
Line3)";  // R to achieve multiple lines
	std::cout << example << std::endl;
	
	//there is a null termination character at the very end of string \0
	"Lucifa";  // type is const char[7]
	//const char name[8] = "Che\0rno"; //43 68 65 00 72 6e 6f 00
	const char* name = "Cherno";  // one byte per character, utf-8
	const wchar_t* name2 = L"Cherno";  // two bytes per character on Windows
	const char16_t* name3 = u"Cherno"; // two bytes per character, utf-16
	const char32_t* name4 = U"Cherno"; // 4 bytes per character, utf-32
	//name[2] = 'a'; // it's ok removing const
	std::cout << strlen(name) << std::endl; // strlen is a c function, the length of name string is 3
	std::cin.get();
}