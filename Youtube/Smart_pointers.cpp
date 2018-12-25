// you cannot copy unique pointer because it's unique.
//shared pointer has to allocate another block of memory called the control block where it stores that reference count and if you first create a new entity and then pass it into the shared pointer constructor it has to allocate that's two allocation 
// when you assign a shared pointer to another shared pointer thus copying it it will increase the ref count but when you assign a shared pointer to a weak pointer, it won't increse the ref count
#include<iostream>
#include<string>
#include<memory> // smart pointer is include memory

class Entity
{
public:
	Entity()
	{
		std::cout << "Created Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}

	void Print() {}
};

int main()
{
	{
		std::weak_ptr<Entity> e0;
		{
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			e0 = sharedEntity;
		}  // e0 is freed here
	}
	/*{
		std::shared_ptr<Entity> e0;
		{
			// <Entity> is the template argument
			// entity is the unique pointer name, then we have opition to call constructor
			// unique pointer is defined explicitly
			//std::unique_ptr<Entity> entity(new Entity());
			//std::unique_ptr<Entity> entity = std::make_unique<Entity>();
			// std::unique_ptr<Entity> e0 = entity;  // wrong, because you cannot copy unique pointer
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			e0 = sharedEntity;
			//entity->Print();  // because entity is a pointer
		} // e0 still holds the reference to the entity
	}  // here, memeory is freed because it passes two scopes*/

	std::cin.get();
}