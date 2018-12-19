### learning C++

> NewProject 

It provides a recommended `VS` *Directory Structure* as follows:

![](https://i.loli.net/2018/12/17/5c17a606d7d18.png)

> Youtube

course list

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
- [ ] "String Literals in C++" 
- [ ] "CONST in C++" 
- [ ] "The Mutable Keyword in C++" 
- [ ] "Member Initializer Lists in C++ (Constructor Initializer List)" 
- [ ] "Ternary Operators in C++ (Conditional Assignment)" 
- [ ] "How to CREATE/INSTANTIATE OBJECTS in C++" 
- [ ] "The NEW Keyword in C++" 
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

***
*Date: 2018-12-19*    
*Generate course list*  

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
*Date: 2018-12-18*
- [x] Strings.cpp

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
*Date: 2018-12-17*

- [ ] Array.cpp
- [ ] Visibility.cpp
- [ ] Pure_virtual_func2.cpp
- [ ] SRO1.cpp
- [ ] SRO2.cpp
- [ ] SRO3.cpp
- [ ] SRO4.cpp
- [ ] Pure_virtual_func.cpp
- [ ] Virtual_func.cpp
- [ ] Inheritance.cpp
***
*Date: 2018-12-16*

- [ ] Constructor.cpp
- [ ] Log1.cpp
- [ ] Enum.cpp
***
*Date: 2018-12-15*

- [ ] Main14.cpp
- [ ] Main13.cpp
- [ ] Staticcpp.cpp
- [ ] Main12.cpp
- [ ] Main11.cpp
- [ ] Main10.cpp
***
*Date: 2018-12-14*

- [ ] Main9.cpp
- [ ] Main7.cpp
- [ ] Main8.cpp
***
*Date: 2018-12-13*

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
*Date: 2018-12-12*
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