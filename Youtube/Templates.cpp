// the compiler writes code for you based on the rules that you've given it and based on the uage of that functional class or anything like that
#include<iostream>
#include<string>

template<typename T, int N>
class Array
{
private:
	int m_Array[N];
public:
	int GetSize() const { return N; }
};

int main()
{
	Array<std::string, 50> array;
	std::cout << array.GetSize() << std::endl;

	std::cin.get();
}