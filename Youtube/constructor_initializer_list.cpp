// it's a way for us to initialize our class member functions in the Constructors

#include<iostream>
#include<string>

class Example
{
public:
	Example()
	{
		std::cout << "Created Entity!" << std::endl;
	}

	Example(int x)
	{
		std::cout << "Created Entity with " << x << "!" << std::endl;
	}
};

class Entity
{
private:
	//int m_Score;
	std::string m_Name;
	Example m_Example;  // kind of calling default constructor, it's eay to understand this when it appears at line 30
public:
	Entity()  // default constructor
		//: m_Score(0), m_Name("Unknown") // 2nd way to initialize, initialize them in order (line 23-24)
	{
		//Example m_Example;
		m_Name = std::string("Unknown");
		m_Example = Example(8);  // create a new example instance 
		// seem to create two objects
	}
	/*{
		m_Name = "Unknown"; // 1st way to initialize
	}*/

	Entity(const std::string& name)
	//	: m_Name(name)
	{
		m_Name = name;
	}
	const std::string& GetName() const { return m_Name; }
};

int main()
{
	Entity e0;
	/*std::cout << e0.GetName() << std::endl;

	Entity e1("Cherno");
	std::cout << e1.GetName() << std::endl;*/

	std::cin.get();
}