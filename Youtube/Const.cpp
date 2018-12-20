// const is like a promise (keep constant), you can break your promise
#include<iostream>

// 3rd usage of const
class Entity
{
private:
	int m_X, m_Y;  //int *m_X, *m_Y;
	mutable int var; // with mutable you can change it
public:
	int GetX() const // const after a method, it only works in a class
		// it means you cannot modify class member variables (line 8)
		// it is just kind of read-only method, it's just gonna read data from the class
	{
		var = 2; // that's ok because var is mutable
		m_X = 2; // it's not gonna work
		return m_X;
	}

	void SetX(int x)
	{
		m_X = x;
	}
};

/*void PrintEntity(const Entity* e)
{
	e = nullptr;  // can reassign it to point to sth else
	std::cout << e.GetX() << std::endl;  // cannot modify the content
}*/

void PrintEntity(const Entity& e) // with references you are the contents, Entity
{
	e = Entity();  // e is the type of const Entity, cannot be modified
	std::cout << e.GetX() << std::endl;
}

int main()
{
	Entity e;

	const int MAX_AGE = 90; // the compiler treat it as a read-only constant

	//1st case
	int* a = new int;  // a is a pointer to an int
	*a = 2; // change the content
	//a = &MAX_AGE; // ERROR: a value of type "const int *" cannot be assigned to an entity of type "int *"
	a = (int*)&MAX_AGE;  // change the memory it points to
	std::cout << *a << std::endl;

	//2nd case 
	const int* a1 = new int;  // a1 is a pointer to an int that is constant
	*a1 = 2; 	// cannot modify the content	
	a1 = (int*)&MAX_AGE; 
	std::cout << *a1 << std::endl;

	//3rd case, equivalent to 2nd case
	int const* a2 = new int;  // a2 is a pointer to a constant int
	*a2 = 2; 	// cannot modify the content	
	a2 = (int*)&MAX_AGE;
	std::cout << *a2 << std::endl;

	// brief summary, if variable name is right next to pointer symbol *, which indicates that the content cannot be modified.

	//4th case
	int* const a3 = new int;  // a3 is a constant pointer to an int
	*a3 = 2; 	
	a3 = (int*)&MAX_AGE;  // cannot reassign the actual pointer itself to point to something else
	std::cout << *a3 << std::endl;

	//5th case
	const int* const a4 = new int;  // a4 is a constant pointer to an int that is constant
	*a4 = 2;  // cannot modify the content
	a4 = (int*)&MAX_AGE;  // cannot reassign the actual pointer itself to point to something else
	std::cout << *a4 << std::endl;

	std::cin.get();
}

/*
For people having trouble remembering the order in which const keyword is to be used, here's a quick tip.
You have to read it backward, like the compiler does. For instance :

-const int * A; -> "A is a pointer to an int that is constant."
(or, depending on how you prefer to write it)
int const* A; -> "A is a pointer to a const int"
but both are the same as explained in the video.

-int * const A; -> "A is a const pointer to an int."
-const int* const A; -> "A is a const pointer to an int that is constant".?
*/