// static

#include<iostream>

//int s_Variable = 10;  
extern int s_Variable;

void Function()
{

}

int main()
{
	std::cout << s_Variable << std::endl;
	std::cin.get();
}