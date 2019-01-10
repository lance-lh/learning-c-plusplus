// C style cast and C++ style cast
// there are four types of cast in C++, they are 
// static cast, reinterpret cast, dynamic cast and const cast
// C style cast can achieve all of those above casts


#include<iostream>

class Base 
{
public:
	Base() {}
	virtual ~Base() {}
};

class Derived : public Base
{
public:
	Derived() {}
	~Derived() {}
};

class AnotherClass : public Base
{
public:
	AnotherClass() {}
	~AnotherClass() {}
};

int main()
{
	/*double value = 5.25;
	double a = (int)value + 5.3;  // here, even double value = 5.9, (int)value = 5

	double s = static_cast<int>(value) + 5.3;
	std::cout << s << std::endl;*/

	Derived* derived = new Derived();

	Base* base = derived;

	Derived* ac = dynamic_cast<Derived*>(base);

	std::cin.get();
}