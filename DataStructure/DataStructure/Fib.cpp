#include<iostream>

/*
// iterative method via loop
int main()
{
	int a[20];
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i < 20; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}

	for (int i = 0; i < 20; i++)
	{
		std::cout << a[i] << '\t';
	}
	std::cout << '\n';

	std::cin.get();
}*/

// recursive method via switch
int Fib(int x)
{
	if (x < 2)
	{
		return x == 0 ? 0 : 1;
	}
	return Fib(x - 1) + Fib(x - 2);
}

int main()
{
	for (int i = 0; i < 20; i++)
	{
		std::cout << Fib(i) << '\t';
	}
	std::cout << '\n';

	std::cin.get();
}