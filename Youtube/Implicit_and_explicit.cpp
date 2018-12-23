#include<iostream>
#include<string>

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	Entity(const std::string& name)
		: m_Name(name), m_Age(-1) {}  // -1 means it's invalid, basically no age was supplied
	explicit Entity(int age)  // explicit before constructor means it only can be called explicitly
		: m_Name("Unknown"), m_Age(age) {}
};


void PrintEntity(const Entity& entity)
{
	// Printing
}


int main()
{
	PrintEntity(22);
	PrintEntity("Cherno"); // wrong, const char

	// c++ need to convert const char to string, and convert string to Entity
	PrintEntity(std::string("Cherno")); // 1st way
	PrintEntity(Entity("Cherno"));  // 2nd way

	Entity a("Cherno");
	Entity b(22);

	Entity c = std::string("Lance");
	Entity d = 22;  // implicit convertion

	std::cin.get();
}