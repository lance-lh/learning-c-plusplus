// mutable means something can change
// first usage with const
// second usage is lambda
// mutable members of const class instances are modifiable. 


#include<iostream>
#include<string>

class Entity
{
private:
	std::string m_Name;
	mutable int m_DebugCount = 0;
public:
	const std::string& GetName() const
	{
		//m_Name = "";  //cannot modify the class member value because of const after method
		m_DebugCount++;
		return m_Name;
	}
};

int main()
{
	const Entity e;
	e.GetName();

	int x = 8;
	auto f = [=]() mutable
	{
		x++; // after that, x = 8
		std::cout << "Hello" << std::endl;
	};

	f();
	// x = 8, u are passing it by value, it's not gonna change
	std::cin.get();
}