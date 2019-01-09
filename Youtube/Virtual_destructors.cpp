// whenever you are writing a class that you will be extending or that might be subclass whenever you're basically permitting a class to be subclass, you need to 100% declare your destructor as virtual.

#include<iostream>

class Base
{
public:
	Base() { std::cout << "Base Constructor\n"; }
	virtual ~Base() { std::cout << "Base Destructor\n"; }
};

class Derived : public Base
{
public:
	Derived() { m_Array = new int[5]; std::cout << "Derived Constructor\n"; }
	~Derived() { delete[] m_Array; std::cout << "Derived Destructor\n"; }
private:
	int* m_Array;
};


int main()
{
	Base* base = new Base();
	delete base;
	std::cout << "--------------\n";
	Derived* derived = new Derived();
	delete derived;
	std::cout << "--------------\n";
	Base* poly = new Derived();
	delete poly; // which causes a memory leak, because Derived Destructor is not called, that' s why we need virtual destructor 


	std::cin.get();
}