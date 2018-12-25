#include<iostream>
#include<string>

struct Vector3
{
	float x, y, z;
};

/*class Entity
{
public:
	int x;
public:
	void Print() const { std::cout << "Hello!" << std::endl; }
};

class ScopedPtr
{
private:
	Entity* m_Obj;
public:
	ScopedPtr(Entity* entity)
		: m_Obj(entity)
	{
	}

	~ScopedPtr()
	{
		delete m_Obj;
	}

	Entity* operator->()  // operator overloading
	{
		return m_Obj;
	}

	const Entity* operator->() const
	{
		return m_Obj;
	}
};*/

int main() // entry point
{
	int offset = (int)&((Vector3*)nullptr)->z;
	std::cout << offset << std::endl;
	//const ScopedPtr entity = new Entity();
	//entity->Print();
	
	/*Entity e;
	e.Print();

	Entity* ptr = &e;
	ptr->Print();
	ptr->x = 2;*/

	std::cin.get();
}