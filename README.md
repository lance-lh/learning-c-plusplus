# learning C++

## Contents
- [NewProject](#newproject)
- [Youtube](#youtube)
    - [Date: 2018-12-25](#2018-12-25)
        - [smart pointers](#smart-pointers)
        - [copying and copy constructor](#copying-and-copy-constructor)
        - [array operator](#array-operator)
    - [Date: 2018-12-24](#2018-12-24)
        - [Operators and operator overloading](#Operators-and-operator-overloading)
        - [this](#this)
        - [object lifetime](#object-lifetime)
    - [Date: 2018-12-23](#2018-12-23)
        - [Create objects](#create-objects)
        - [new and delete](#new-and-delete)
        - [implicit conversion and explicit](#implicit-conversion-and-explicit)
    - [Date: 2018-12-22](#2018-12-22)
        - [ternary operator](#ternary-operator)
    - [Date: 2018-12-21](#2018-12-21)
        - [mutable](#mutable)
        - [constructor initializer list](#constructor-initializer-list)
    - [Date: 2018-12-20](#2018-12-20)
        - [String literals](#string_literals)
        - [Const](#const)
    - [Date: 2018-12-19](#2018-12-19)
        - [Generate course list](#generate-course-list)
    - [Date: 2018-12-18](#2018-12-18)
        - [Strings](#string)
    - [Date: 2018-12-17](#2018-12-17)
        - [Array](#array)
        - [Visibility](#visibility)
        - [Pure virtual func2](#pure_virtual_func2)
        - [SRO](#sro)
        - [Pure virtual func](#pure_virtual_func)
        - [Virtual_func](#virtual_func)
        - [Inheritance](#inheritance)
    - [Date: 2018-12-16](#2018-12-16)
        - [Constructor](#constructor)
        - [Log1](#log1)
        - [Enum](#enum)
    - [Date: 2018-12-15](#2018-12-15)
    - [Date: 2018-12-14](#2018-12-14)
    - [Date: 2018-12-13](#2018-12-13)
    - [Date: 2018-12-12](#2018-12-12)

## NewProject 

It provides a recommended `VS` *Directory Structure* as follows:

![](https://i.loli.net/2018/12/17/5c17a606d7d18.png)

## Youtube  
<details>
<summary>course list</summary>  

- [x] "Welcome to C++" 
- [x] "How to Setup C++ on Windows" 
- [x] "How to Setup C++ on Mac" 
- [x] "How to Setup C++ on Linux" 
- [x] "How C++ Works" 
- [x] "How the C++ Compiler Works" 
- [x] "How the C++ Linker Works" 
- [x] "Variables in C++" 
- [x] "Functions in C++" 
- [x] "C++ Header Files" 
- [x] "How to DEBUG C++ in VISUAL STUDIO" 
- [x] "CONDITIONS and BRANCHES in C++ (if statements)" 
- [x] "BEST Visual Studio Setup for C++ Projects!" 
- [x] "Loops in C++ (for loops, while loops)" 
- [x] "Control Flow in C++ (continue, break, return)" 
- [x] "POINTERS in C++" 
- [x] "REFERENCES in C++" 
- [x] "CLASSES in C++" 
- [x] "CLASSES vs STRUCTS in C++" 
- [x] "How to Write a C++ Class" 
- [x] "Static in C++" 
- [x] "Static for Classes and Structs in C++" 
- [x] "Local Static in C++" 
- [x] "ENUMS in C++" 
- [x] "Constructors in C++" 
- [x] "Destructors in C++" 
- [x] "Inheritance in C++" 
- [x] "Virtual Functions in C++" 
- [x] "Interfaces in C++ (Pure Virtual Functions)" 
- [x] "Visibility in C++" 
- [x] "Arrays in C++" 
- [x] "How Strings Work in C++ (and how to use them)" 
- [x] "String Literals in C++" 
- [x] "CONST in C++" 
- [x] "The Mutable Keyword in C++" 
- [x] "Member Initializer Lists in C++ (Constructor Initializer List)" 
- [x] "Ternary Operators in C++ (Conditional Assignment)" 
- [x] "How to CREATE/INSTANTIATE OBJECTS in C++" 
- [x] "The NEW Keyword in C++" 
- [x] "Implicit Conversion and the Explicit Keyword in C++" 
- [x] "OPERATORS and OPERATOR OVERLOADING in C++" 
- [x] "The &quot;this&quot; keyword in C++" 
- [x] "Object Lifetime in C++ (Stack/Scope Lifetimes)" 
- [x] "SMART POINTERS in C++ (std::unique_ptr, std::shared_ptr, std::weak_ptr)" 
- [x] "Copying and Copy Constructors in C++" 
- [x] "The Arrow Operator in C++" 
- [ ] "Dynamic Arrays in C++ (std::vector)" 
- [ ] "Optimizing the usage of std::vector in C++" 
- [ ] "Using Libraries in C++ (Static Linking)" 
- [ ] "Using Dynamic Libraries in C++" 
- [ ] "Making and Working with Libraries in C++ (Multiple Projects in Visual Studio)" 
- [ ] "How to Deal with Multiple Return Values in C++" 
- [ ] "Templates in C++" 
- [ ] "Stack vs Heap Memory in C++" 
- [ ] "Macros in C++" 
- [ ] "The &quot;auto&quot; keyword in C++" 
- [ ] "Static Arrays in C++ (std::array)" 
- [ ] "Function Pointers in C++" 
- [ ] "Lambdas in C++" 
- [ ] "Why I don&#39;t &quot;using namespace std&quot;" 
- [ ] "Namespaces in C++" 
- [ ] "Threads in C++" 
- [ ] "Timing in C++" 
- [ ] "Multidimensional Arrays in C++ (2D arrays)" 
- [ ] "Sorting in C++" 
- [ ] "Type Punning in C++" 
- [ ] "Unions in C++" 
- [ ] "Virtual Destructors in C++" 
- [ ] "Casting in C++" 
- [ ] "Conditional and Action Breakpoints in C++" 
- [ ] "Safety in modern C++ and how to teach it" 
- [ ] "Precompiled Headers in C++"   

</details> 

### 2018-12-25  
#### smart pointers  
> you cannot copy **unique pointer** because it's unique.
>
> **shared pointer** has to allocate another block of memory called the control block where it stores that **reference count** and if you first create a new entity and then pass it into the **shared pointer** constructor it has to allocate that's two allocation 
>
> when you assign a **shared pointer** to another **shared pointer** thus copying it it will increase the ref count but when you assign a **shared pointer** to a **weak pointer**, it won't increase the ref count  

* `weak pointer`  
```c++
int main()
{
	{
		std::weak_ptr<Entity> e0;
		{
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			e0 = sharedEntity;
		}  // e0 is freed here
	}
```

* `shared pointer`  
```c++
int main()
	{
		std::shared_ptr<Entity> e0;
		{
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			e0 = sharedEntity;
		} // e0 still holds the reference to the entity
	}  // here, memeory is freed because it passes two scopes*/
```

* `unique pointer`  
```c++
int main()
{
		{
			//std::unique_ptr<Entity> entity(new Entity());
			std::unique_ptr<Entity> entity = std::make_unique<Entity>();
			std::unique_ptr<Entity> e0 = entity;  // wrong, because you cannot copy unique pointer
		} 
} 
```

1. `<Entity>` is the template argument
2. entity is the `unique pointer` name, then we have option to call constructor
3. `unique pointer` is defined explicitly

#### copying and copy constructor  
> what we need is deep copy, copy the entire object
>
> copy constructor is a constructor that gets called for that second string when you actually copy it
>
> when you assign a string to an object that is also a string when you try to create a new variable and you assign it with another variable which has the same type as a variable that you're actually creating you're copying that variable and thus you're calling something called the `copy constructor`
```c++
#include<iostream>
#include<string>

struct Vector2
{
	float x, y;
}; 

class String // string is made up of an array of characters
{
private:
	char* m_Buffer; // point to the buffer of chars
	unsigned int m_Size; // keep track of how big the string is
public:
	String(const char* string) // constructor
	{
		m_Size = strlen(string); // calculate how long the string is, so that we can copy the data from the string into the buffer
		m_Buffer = new char[m_Size + 1]; // decide how big of the buffer is
		memcpy(m_Buffer, string, m_Size);
		m_Buffer[m_Size] = 0;
	}

	String(const String& other) // copy constructor
		: m_Size(other.m_Size) // it's just an integer, so shallow copy is okay
	{
		std::cout << "Copied String!" << std::endl;

		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}
	/*	: m_Buffer(other.m_Buffer), m_Size(other.m_Size)  // default copy constructor
	{
	}*/

	// or use another way to define copy constructor
	/*String(const String& other)
	{
		memcpy(this, &other, sizeof(String));
	}
	*/

	~String() // destructor
	{
		delete[] m_Buffer;
	}

	char& operator[](unsigned int index)  // operator overload
	{
		return m_Buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;
}

// if reference is not used, we get three string copies happening
// anchor3, anchor4, anchor5 totally three times copying
// what's actually happening is every time we copy a string we allocate memory on the heap, copy all that memory and then at the end of it, we free it. That's completely unnecessary.
void PrintString(const String& string)  // anchor2 
{
	std::cout << string << std::endl;
}

int main()
{
	/*int a = 2;
	int b = a;
	b = 3;  // a remains 2
	*/
	
	/*Vector2 a = { 2, 3 };
	Vector2 b = a;
	b.x = 5;  // a, b are two separate Vector2s 
	*/

	/*Vector2* a = new Vector2();
	Vector2* b = a; // actually copy the pointer
	b->x = 2;  // a and b are both pointing to the same memory address
	*/

	String string = "Cherno"; // m_Buffer = 0x00a517d0
	String second = string;  // anchor3, shallow cpoy a string, m_Buffer = 0x00a517d0
	// these two char pointers point to the same address

	second[2] = 'a';

	PrintString(string);  // anchor4
	PrintString(second);  // anchor5

	/*std::cout << string << std::endl;
	std::cout << second << std::endl;
	*/

	std::cin.get();
} // anchor 1, when the code run to anchor1, it tries to delete the buffer twice so we are trying to free the same block of memory twice. that's why we get a crash because the memory has already been freed it's not ours, we can not free it again
```
1. `strcpy` includes the null termination character
2. keep in mind that always pass your objects by const reference `const&`
3. In this code, a string class is created, which includes two members: `char pointe`r and `int`.
4. In user-defined string class, `constructor`, `destructor`, `copy constructor`, `operator overloading` and a `friend` declaration are developed.
5. `friend` declaration is a new feature for me, the detailed knowledge can be found [here](https://en.cppreference.com/w/cpp/language/friend).   
> The `friend` declaration appears in a *class body* and **grants a function or another class access to private and protected members of the class** where the friend declaration appears.  

#### array operator  

- [What does `->` mean in C++?](https://stackoverflow.com/questions/4113365/what-does-mean-in-c)  

> It's to access a **member function** or **member variable** of an object through a *pointer*, as opposed to a regular variable or reference.
>
> For example: with a regular variable or reference, you use the `.` operator to access member functions or member variables.
>
> ```c++
> std::string s = "abc";
> std::cout << s.length() << std::endl;
> ```
>
> But if you're working with a pointer, you need to use the `->` operator:
>
> ```c++
> std::string* s = new std::string("abc");
> std::cout << s->length() << std::endl;
> ```
>
> It can also be overloaded to perform a specific function for a certain object type. Smart pointers like `shared_ptr` and `unique_ptr`, as well as STL container iterators, overload this operator to mimic native pointer semantics.
>
> For example:
>
> ```c++
> std::map<int, int>::iterator it = mymap.begin(), end = mymap.end();
> for (; it != end; ++it)
>     std::cout << it->first << std::endl;
> ```
>
> `a->b` means `(*a).b`.
>
> If `a` is a *pointer*, `a->b` is the member `b` of which `a` points to.  

* get the offset of a certain member variable in memory  
```c++
struct Vector3
{
	float x, y, z;
};

int main() // entry point
{
	int offset = (int)&((Vector3*)nullptr)->z;
	std::cout << offset << std::endl;
	
	std::cin.get();
}
```

`int offset = (int)&((Vector3*)nullptr)->z;` 

1. first, we cast a `nullptr` to `Vector3*` type
2. use `->` to point to the class member
3. use `&` to obtain the address of variable in the memory
4. use `int` to cast it into integer type

***
### 2018-12-24  
#### Operators and operator overloading  
> operators are just functions 

```c++
#include<iostream>
#include<string>

struct Vector2  // public is default
{
	float x, y;
	
	Vector2(float x, float y)
		: x(x), y(y) {}		

	Vector2 Add(const Vector2& other) const  // not modify class members
	{
		return Vector2(x + other.x, y + other.y); // other means struct parameters (x, y), use point to specify the point it refers to
	}

	Vector2 operator+(const Vector2& other) const
	{
		return Add(other);
	}

	Vector2 Multiply(const Vector2& other) const  
	{
		return Vector2(x * other.x, y * other.y); 
	}

	Vector2 operator*(const Vector2& other) const
	{
		return Multiply(other);
	}

	bool operator==(const Vector2& other) const
	{
		return x == other.x && y == other.y;
	}

	bool operator!=(const Vector2& other) const
	{
		//return !operator==(other);
		return !(*this == other);
	}
};

std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
	stream << other.x << ", " << other.y; 
	return stream; 
}

int main()
{
	Vector2 position(4.0f, 4.0f);
	Vector2 speed(0.5f, 1.5f);
	Vector2 powerup(1.1f, 1.1f);

	Vector2 result1 = position.Add(speed.Multiply(powerup));
	Vector2 result2 = position + speed * powerup;

	std::cout << result1 << std::endl;  
	std::cout << result2 << std::endl;  

	if (result1 == result2)
	{

	}

	std::cin.get();
}
```
* print class-inner content to the console   
```c++
std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
	stream << other.x << ", " << other.y; 
	return stream; 
}
```

1. use c++ `overload` feature  
2. `std::ostream` is the original definition of `<<`  
3. `operator<<` to indicate it's gonna use to overfload operator  
4. `std::ostream& stream` is the left side of `<<`  
5. `const Vector2& other` is the right side of `<<` needed to be print out 

* Error: no operator "<<" matches these operands  
```c++
std::cout << result1 << std::endl; 
std::cout << result2 << std::endl;  
```

1. left side of `<<` is a class `cout`  
2. right side of `<<` is various data types that `cout` already knows how to print out  
3. operand types are `std::ostream << Vector2`  
4. we can't do this because there is no `overload` for this operator which takes in an output stream which is what `cout` is and then an actual `Vector2` but we can add that  

Besides, here is a detailed explanation of [C++ Overloading (Operator and Function)](https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm)  
> C++ allows you to specify more than one definition for a **function** name or an **operator** in the same scope, which is called **function overloading** and **operator overloading** respectively.

> An overloaded declaration is a declaration that is declared with the same name as a previously declared declaration in the same scope, except that both declarations have different arguments and obviously different definition (implementation).

> When you call an overloaded **function** or **operator**, the compiler determines the most appropriate definition to use, by comparing the argument types you have used to call the function or operator with the parameter types specified in the definitions. The process of selecting the most appropriate overloaded function or operator is called **overload resolution**.  

> **Function Overloading**  

> You can have multiple definitions for the same function name in the same scope. The definition of the function must differ from each other by the types and/or the number of arguments in the argument list. You cannot overload function declarations that differ only by return type.  
>
> **Operators Overloading**  
>
> You can redefine or overload most of the built-in operators available in C++. Thus, a programmer can use operators with user-defined types as well.
>
> Overloaded operators are functions with special names: the keyword "operator" followed by the symbol for the operator being defined. Like any other function, an overloaded operator has a return type and a parameter list.
>
> ```c++
> Box operator+(const Box&);
> ```
>
> declares the addition operator that can be used to **add** two Box objects and returns final Box object. Most overloaded operators may be defined as ordinary non-member functions or as class member functions. In case we define above function as non-member function of a class then we would have to pass two arguments for each operand as follows : 
>
> ```c++
> Box operator+(const Box&, const Box&);
> ```

#### this  
- Video  
> `this` is only accessible to us through a `member function`, `member function` meaning a function that belongs to a `class` so a `method` and inside a `method` we can reference `this` and what `this` is is a `pointer` to the current `object instance` that the `method` belongs to
> 
> we first need to `instantiate` an `object` and then call the `method` so the `method` has to be called with a valid `object` and the `this` keyword is a `pointer` to that object   
```c++
class Entity
{
public:
	int x, y;

	Entity(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	int GetX() const  // we are not allowed to modify the class
	{
		const Entity* e = this;  // so this has to be const type
		return x;
	}
};

int  main()
{
	Entity e;
	std::cin.get();
}
```

- [C++ this Pointer](https://www.tutorialspoint.com/cplusplus/cpp_this_pointer.htm)  

> Every object in C++ has access to its own address through an important pointer called **this**pointer. The **this** pointer is an implicit parameter to all member functions. Therefore, inside a member function, this may be used to refer to the invoking object.

> Friend functions do not have a **this** pointer, because friends are not members of a class. Only member functions have a **this** pointer.

- [References](https://isocpp.org/wiki/faq/references)  
> **Why does C++ have both pointers and references? ** 
>
> C++ inherited pointers from C, so they couldn’t be removed without causing serious compatibility problems. References are useful for several things, but the direct reason they were introduced in C++ was to support operator overloading. For example:
>
> ```c++
>     void f1(const complex* x, const complex* y) // without references
>     {
>         complex z = *x+*y;  // ugly
>         // ...
>     }
>     void f2(const complex& x, const complex& y) // with references
>     {
>         complex z = x+y;    // better
>         // ...
>     }   
> ```
>
> **When should I use references, and when should I use pointers?**
>
> Use references when you can, and pointers when you have to.
>
> **Should I use call-by-value or call-by-reference?**
>
> That depends on what you are trying to achieve:
>
> - If you want to **change the object passed**, call by reference or use a pointer;   
>
>   e.g., `void f(X&);`or `void f(X*);`.
>
> - If you don’t want to **change the object passed and it is big**, call by const reference; 
>
>   e.g., `void f(const X&);`.
>
> - **Otherwise**, call by value; 
>
>   e.g. `void f(X);`.
>
> *What does “big” mean?* Anything larger than a couple of words.

- [Use of the & operator in C++ function signatures](https://stackoverflow.com/questions/6877052/use-of-the-operator-in-c-function-signatures)  
> The `&` character in C++ is dual purpose. It can mean (at least)
> 1. Take the address of a value
> 2. Declare a reference to a type
> 
> The use you're referring to in the function signature is an instance of #2. The parameter `string& str` is a reference to a `string` instance. This is not just limited to function signatures, it can occur in method bodies as well.  

#### object lifetime  
In this video, two kinds of *object lifetime* are introduced, they are **stack lifetime** and **scope lifetime**.  
* stack lifetime  
```c++
#include<iostream>
#include<string>

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
};

int* CreateArray()
{
	int array[50];  // declare it on the stack
	return array; // it returns a pointer to that stack memory, the stack memory gets cleared as soon as we go out of scope
}

int main()
{
	int* a = CreateArray();
	{
		Entity* e = new Entity(); // set breakpoint, even run pass anchor1 to anchor2
	} // anchor1

	std::cin.get();  // anchor2
}
```

1. the stack-based variable gets destroyed as soon as we go out of the scope
2. it is a mistake that people will create a stack-based variable and try to return a pointer to it, not realizing that once that function ends and you go out of scope that variables done

* scope lifetime  
```c++
#include<iostream>
#include<string>

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
};

class ScopedPtr
{
private:
	Entity* m_Ptr;
public:
	ScopedPtr(Entity* ptr)
		: m_Ptr(ptr)
	{
	}

	~ScopedPtr()
	{
		delete m_Ptr;
	}
};

int main()
{
	{
		ScopedPtr e = new Entity();
	} 
	std::cin.get(); 
}
```

the scoped pointer class itself the scoped pointer object gets allocated on the stack which means it gets deleted and when it gets deleted automatically equals delete in the destructor which deletes that pointer `m_Ptr` that it's wrapping  

Some good references can be found as follows:  
- [C++ Classes and Objects](https://www.geeksforgeeks.org/c-classes-and-objects/)  
- [Object](https://en.cppreference.com/w/cpp/language/object)  
- [Object (computer science)](https://en.wikipedia.org/wiki/Object_(computer_science))  
- [Lifetime](https://en.cppreference.com/w/cpp/language/lifetime)  
- [What is the lifecycle of a C++ object?](https://stackoverflow.com/questions/17121305/what-is-the-lifecycle-of-a-c-object)  

> > 1) What are all the ways to create a C++ object?
>
> Same as C: they can be global variables, local automatic, local static or dynamic. You may be confused by the constructor, but simply think that every time you create an object, a constructor is called. Always. Which constructor is simply a matter of what parameters are used when creating the object.
>
> Assignment does not create a new object, it simply copies from one oject to another, (think of `memcpy` but smarter).
>
> > 2) What are all the different initialization syntaxes associated with all these types of object creation? What's the difference between T f = x, T f(x);, T f{x};, etc.?
>
> - `T f(x)` is the classic way, it simply creates an object of type `T` using the constructor that takes `x` as argument.
> - `T f{x}` is the new C++11 unified syntax, as it can be used to initialize aggregate types (arrays and such), but other than that it is equivalent to the former.
> - `T f = x` it depends on whether `x` is of type `T`. If it is, then it equivalent to the former, but if it is of different type, then it is equivalent to `T f = T(x)`. Not that it really matters, because the compiler is allowed to optimize away the extra copy (copy elision).
> - `T(x)`. You forgot this one. A temporary object of type `T` is created (using the same constructor as above), it is used whereever it happens in the code, and *at the end of the current full expression*, it is destroyed.
> - `T f`. This creates a value of type `T` using the default constructor, if available. That is simply a constructor that takes no parameters.
> - `T f{}`. Default contructed, but with the new unified syntax. Note that `T f()` is not an object of type `T`, but instead a function returning `T`!.
> - `T()`. A temporary object using the default constructor.
>
> > 3) Most importantly, when is it correct to copy/assign/whatever = is in C++, and when do you want to use pointers?
>
> You can use the same as in C. Think of the copy/assignment as if it where a `memcpy`. You can also pass references around, but you also may wait a while until you feel comfortable with those. What you should do, is: do not use pointers as auxiliary local variables, use references instead.
>
> > 4) Finally, what are all these things like shared_ptr, weak_ptr, etc.?
>
> They are tools in your C++ tool belt. You will have to learn through experience and some mistakes...
>
> - `shared_ptr` use when the ownership of the object is shared.
> - `unique_ptr` use when the ownership of the object is unique and unambiguous.
> - `weak_ptr` used to break loops in trees of `shared_ptr`. They are *not* detected automatically.
> - `vector`. Don't forget this one! Use it to create dynamic arrays of anything.
>
> PS: You forgot to ask about **destructors**. IMO, destructors are what gives C++ its personality, so be sure to use a lot of them!

***
### 2018-12-23  
#### Create objects  
> we basically have two choices here and the difference between the choices is where the memory comes from which memory were actually going to be creating our object in
​        when we create an object in C++, it needs to occupy some memory even if we write a class that is completely empty, no class members or nothing like that it has to occupy at least one byte of memory
​         stack objects for example, their lifetime is actually controlled by the scope that they declared and as soon as that variable goes out of scope, that's it the memory is free because when that scope ends the stack pops and anything that scope frame in that stack frame that gets freed
​         once you allocated an object in that heap, it's up to you to determine when to free that block of memory

* create class  

```c++
  class Entity
  {
  private:
  String m_Name;
  public:
  Entity() 
	: m_Name("Unkown")  //constructor 
  	{
  	}
  Entity(const String& name) 
	: m_Name(name) 
  	{
  	}
  const String& GetName() const 
  	{ 
		return m_Name; 
  	}
  };
```

* objects created on the stack  

```c++
int main()
{
	Entity* e;
	{  // use curly brace to create a scope
		Entity entity("Cherno");
		e = &entity;  // when the code runs to the next line of anchor1, content of e is freed because of scope 
		std::cout << entity.GetName() << std::endl;
	}  // anchor1
	std::cin.get();
}
```

* objects created on the heap  

```c++
int main()
{
	Entity* e;
	{  // use curly brace to create a scope
		Entity* entity = new Entity("Cherno"); 
		e = entity; // when the code runs to the next line of anchor2, content of e is freed because of heap memory is freed
		std::cout << entity->GetName() << std::endl; 
	}  // anchor1
	
	std::cin.get();
	delete e; // anchor2
}
```

* `Entity* entity = new Entity("Cherno");` we allocate memory on the `heap`, call the `constructor` and this new `entity` actually returns an entity pointer it returns the location on the `heap` where this entity has actually been allocated  

* `std::cout << entity->GetName() << std::endl;` since `entity` is a `Entity pointer`, you should dereference first, `(*entity).GetName()`

#### new and delete  
> The main purpose of `new` is to allocate memory on the `heap` specially
> 
> The `new` expression attempts to **allocate storage** and then attempts to **construct and initialize** either a single unnamed object, or an unnamed array of objects in the allocated storage. The new-expression **returns a prvalue pointer** to the constructed object or, if an array of objects was constructed, a pointer to the initial element of the array. [link](https://en.cppreference.com/w/cpp/language/new)

```c++
int a = 2;
int* b = new int[50]; // remember new returns a pointer, 200bytes

Entity* e = new Entity(); // not only allocate the memory, but alse calls the constructor, kind of like (Entity*)malloc(sizeof(Entity) in C, but the latter one does not call the constructor
	 
delete e; // free() in C, but delete also calls the destructor
delete[] b; // when free the array memory created by new square brackets
std::cin.get();
```

#### implicit conversion and explicit  
* first case  
```c++
X x;
Y y(x) //explicit conversion
```
* second case  
```c++
X x;
Y y = x; //implicit conversion
```
> one uses a Y's constructor and one uses the assignment operator though.

> Nope. In the second case it's not an assignment, it's an initialization, the assignment operator (`operator=`) is never called; instead, a non-`explicit` one-parameter constructor (that accepts the type  X as a parameter) is called.

> The difference between initialization and assignment is important: in the first case, a new object is being created, and it starts its life with the value that it is being initialized with (hence why a constructor is called), while assignment happens when an object is assigned (~copied) to an object that already exists and already is in a definite state.

> Anyway, the two forms of initialization that you wrote differ in the fact that in the first case you are explicitly calling a constructor, and thus any constructor is acceptable; in the second case, you're calling a constructor implicitly, since you're not using the "classical" constructor syntax, but the initialization syntax.

> In this case, only one-parameter constructors not marked with `explicit` are acceptable. Such constructors are called by some people "converting" constructors, because they are involved in implicit conversions.

> As specified [in this other answer](https://stackoverflow.com/questions/121162/what-does-the-explicit-keyword-mean/121163#121163), any constructor not marked as `explicit` can take part in an implicit conversion for e.g. converting an object passed to a function to the type expected by such function. Actually, you may say that it's what happens in your second example: you want to initialize (=create with a value copied from elsewhere) `y` with `x`, but `x` first has to be converted to type `Y`, which is done with the implicit constructor.

> This kind of implicit conversion is often desirable: think for example to a string class that has a converting (i.e. non-`explicit`) constructor from a `const char *`: any function that receives a `string` parameter can also be called with a "normal" C-string: because of the converting constructor the caller will use C-strings, the callee will receive its `string` object.

> Still, in some cases one-parameters constructors may not be appropriate for conversion: usually this happens when their only parameter is not conceptually "converted" to the type of the object being created, but it is just a parameter for the construction; think for example about a file stream object: probably it will have a constructor that accepts the name of the file to open, but it makes no sense to say that such string is "converted" to a stream that works on that file.

> You can also find some more complex scenarios where these implicit conversions can completely mess-up the behavior that the programmer expects from overload resolution; examples of this can be found in the answers below the one I linked above.

> More simply, it can also happen that some constructors may be very heavyweight, so the class designer may want to make sure that they are invoked explicitly. In these cases, the constructor is marked as `explicit`, so it can be used only when called "explicitly as a constructor" and doesn't take part in implicit conversions.

This link can be found [here](https://stackoverflow.com/questions/7099957/implicit-vs-explicit-conversion)

***
### 2018-12-22  
#### ternary operator  
In fact, it is *conditional assignment.*  
`eg.1`  

```c++
if (s_Level > 5)
		s_Speed = 10;
	else
		s_Speed = 5;
		
s_Speed = s_Level > 5 ? 10 : 5;
```

`eg.2`  

```c++
if (s_Level > 5)
	if (s_Level > 10)
		s_Speed = 15;
	else
		s_Speed = 10;
else 
	s_Speed = 5;

s_Speed = s_Level > 5 ? s_Level > 10 ? 15 : 10 : 5;
```

***
### 2018-12-21  
#### mutable  

> https://en.cppreference.com/w/cpp/keyword/mutable  

**There are two usages of `mutable`, they are:**  
* mutable type specifier

  its uage can be found in [Const](#const)

* lambda-declarator 
> **Constructs a closure: an unnamed function object capable of capturing variables in scope.**
>
> **Lambda capture**
> The captures is a comma-separated list of zero or more captures, optionally beginning with the *capture-default*. The only capture defaults are
> `&` (implicitly capture the used automatic variables by reference) and
> `= `(implicitly capture the used automatic variables by copy).

More references can be found [here](https://blog.csdn.net/u012209626/article/details/47864727)

#### constructor initializer list
> it's a way for us to initialize our class member functions in the Constructors

* First case
```c++
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
	std::string m_Name;
	Example m_Example;  
public:
	Entity()  // default constructor
	{
		m_Name = std::string("Unknown");
		m_Example = Example(8); 
	}


	Entity(const std::string& name)
	{
		m_Name = name;
	}
	const std::string& GetName() const { return m_Name; }
};

int main()
{
	Entity e0;
	std::cin.get();
}
```
* Output:  
```c++
Created Entity!
Created Entity with 8!
```

* Second case
```c++
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
	std::string m_Name;
	Example m_Example;  
public:
	Entity()  // default constructor
        : m_Example(Example(8))
	{
		m_Name = std::string("Unknown");
	}


	Entity(const std::string& name)
	{
		m_Name = name;
	}
	const std::string& GetName() const { return m_Name; }
};

int main()
{
	Entity e0;
	std::cin.get();
}
```
* Output:  
```c++
Created Entity with 8!
```
***

### 2018-12-20  
#### String_literals   

* string literals are a series of character in between two double quotes.  
* string literals are stored in a read-only section of memory.  
* There are two ways to extend your strings.   
1. `std::string name0 = std::string("Cherno") + "hello";  // use constructor`
2. `std::string name5 = "Cherno"s + "hello"; // s means an operator function`

* multiple line style  
```c++
const char* example = R"(line1
Line2
Line3)";  // R to achieve multiple lines
```
* String Class instantiations  
```c++
const char* name = "Cherno";  // one byte per character, utf-8
const wchar_t* name2 = L"Cherno";  // two bytes per character on Windows
const char16_t* name3 = u"Cherno"; // two bytes per character, utf-16
const char32_t* name4 = U"Cherno"; // 4 bytes per character, utf-32
```
* string length  
```c++
#include<stdlib.h>
std::cout << strlen(string_name) << std::endl;
```

#### Const
> `const` is like a promise (keep constant), you can break your promise  

> For people having trouble remembering the order in which `const` keyword is to be used, here's a quick tip.
You have to *read it backward*, like the compiler does. For instance :
`const int * A;` -> "A is a pointer to an int that is constant."
(or, depending on how you prefer to write it)
`int const* A;` -> "A is a pointer to a const int"
but both are the same as explained in the video.
`int * const A;` -> "A is a const pointer to an int."
`const int* const A;` -> "A is a const pointer to an int that is constant".﻿

```c++
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
```
**There are four usages of `const` introduced in videos***  

1. cannot modify the content  
`const int* a = new int;` = `int const* a = new int;`
2. cannot reassign it to point to something else  
`int* const a = new int;`  
3. cannot modify the content, either reassign it to sth else  
`const int* const a = new int`  
4. `const` after a class method  
```
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
```
* attention to keyword `mutable`

***

### 2018-12-19    
#### Generate course list   

* using python framework, since it is convenient to use crawler
* software Regester to pre-process
* requests package to parser html
* re to handle content

```python
import requests
# from bs4 import BeautifulSoup
import re

r = requests.get(url)
# html = r.content
# soup = BeautifulSoup(html, 'html.parser')

html = r.text

pattern1 = '(?<=data-title\=).*?(?=data-set-video-id)'
pattern2 = '(?<=\").*?(?=\")'

result1 = re.findall('(?<=data-title\=).*?(?=data-video-id)',html)
print(result1)

file=open('D:/data.txt','w')
file.write(str(result1))
file.close()
```
***

### 2018-12-18  
#### Strings  

Some good references here:
> https://en.wikipedia.org/wiki/ASCII
>
> http://www.cplusplus.com/reference/string/string/

```
string is an array of characters, letters, numbers, symbols
string of text
char pointer

passing string to func,  void PrintString(const std::string& string)
this is a reference meaning that it wouldn't get copied and const means we're not to modify it here

strings are immutable in the sense that you can't just extend a string and make it bigger because this is a fixed alllocated block of memory if you wanna have a bigger string you need to perform a brand new allocation and delete the old string
```
***

### 2018-12-17  
#### Array  
#### Visibility  
#### Pure_virtual_func2  
#### SRO  
- [ ] SRO1.cpp
- [ ] SRO2.cpp
- [ ] SRO3.cpp
- [ ] SRO4.cpp

#### Pure_virtual_func  
####  Virtual_func  
####  Inheritance  

***

### 2018-12-16  
####  Constructor  
#### Log1  
####  Enum  

***

### 2018-12-15  
- [ ] Main14.cpp
- [ ] Main13.cpp
- [ ] Staticcpp.cpp
- [ ] Main12.cpp
- [ ] Main11.cpp
- [ ] Main10.cpp

***

### 2018-12-14  
- [ ] Main9.cpp
- [ ] Main7.cpp
- [ ] Main8.cpp

***

### 2018-12-13  
- [ ] Main6.cpp
- [ ] Main5.cpp
- [ ] Main4.cpp
- [ ] Main3.cpp
- [ ] Main2.cpp
- [ ] Main1.cpp
- [ ] Log.cpp
- [ ] Main.cpp
- [ ] log.h
- [ ] func1.cpp

***

### 2018-12-12  
- [ ] variables.cpp
- [ ] size_range.cpp
- [ ] Mathforfunc.cpp
- [ ] varia.cpp
- [ ] Math.cpp
- [ ] printsh.cpp
- [ ] endofbrace.h
- [ ] hello.cpp
- [ ] this_demo.cpp
- [ ] func_with_multiple_paras.cpp
- [ ] func_with_para.cpp
- [ ] func_test.cpp