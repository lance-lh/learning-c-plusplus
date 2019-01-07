#include<iostream>
#include<vector>

/*void HelloWorld(int a)
{
	std::cout << "Hello World! Value: " << a << std::endl;
}*/

void PrintValue(int value)
{
	std::cout << "Value: " << value << std::endl;
}

void ForEach(const std::vector<int>& values, void(*func)(int))
{
	for (int value : values)
		func(value);
}

int main()
{
	std::vector<int> values = { 1, 5, 4, 2, 3 };
	ForEach(values, PrintValue);
	ForEach(values, [](int value) {std::cout << "Value: " << value << std::endl; });   // lambdas

	/*typedef void(*HelloWorldFunction)(int);  // define a type
	HelloWorldFunction function = HelloWorld;
	function(8);
	function(9);
	function(6);*/
	
	
	
	/*void(*cherno)() = HelloWorld;  // actual type
	cherno();

	auto function = HelloWorld;  // assign a function to a variable, delete parentheses

	function();
	function();*/

	std::cin.get();
}