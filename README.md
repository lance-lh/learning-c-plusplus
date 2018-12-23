# learning C++

## Contents
- [NewProject](#newproject)
- [Youtube](#youtube)
    - [Date: 2018-12-23](#2018-12-23)
        - [Create objects](#create-objects)
        - [new and delete](#new-and-delete)
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
- [ ] "Implicit Conversion and the Explicit Keyword in C++" 
- [ ] "OPERATORS and OPERATOR OVERLOADING in C++" 
- [ ] "The &quot;this&quot; keyword in C++" 
- [ ] "Object Lifetime in C++ (Stack/Scope Lifetimes)" 
- [ ] "SMART POINTERS in C++ (std::unique_ptr, std::shared_ptr, std::weak_ptr)" 
- [ ] "Copying and Copy Constructors in C++" 
- [ ] "The Arrow Operator in C++" 
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