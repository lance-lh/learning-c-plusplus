#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

int main()
{
	std::vector<int> values = { 3,5,1,4,2 };
	//***********************************************
	std::sort(values.begin(), values.end()); // ascending order, sort using the default operator<

	for (int value : values)
		std::cout << value << ' ';
	std::cout << '\n';
	
	//***********************************************
	std::sort(values.begin(), values.end(), std::greater<int>()); // descending order, sort using a standard library compare function object

	for (int value : values)
		std::cout << value << ' ';
	std::cout << '\n';
	
	//***********************************************
	std::sort(values.begin(), values.end(), [](int a, int b)
	{
		return a < b;
	}); // ascending order, sort using lambda

	for (int value : values)
		std::cout << value << ' ';
	std::cout << '\n';

	std::cin.get();
}