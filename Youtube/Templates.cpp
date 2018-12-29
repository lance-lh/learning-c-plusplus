// template does not exist until we call it
#include<iostream>
#include<string>

template<typename T>
void Print(T value) // it can automatically deduce what type T should be, substitue T with proper type
{
	std::cout << value << std::endl;
}

int main()
{
	Print(5);
	Print("Hello");
	Print(5.5f);

	std::cin.get();
}