* [Why do we have to use 'return 0' ?](https://www.codeproject.com/Questions/693038/why-do-we-have-to-use-return-0)

> In every C program you have to use return return 0; (or return -1;, or whatever... ), because the main function signature requires it.
>
> In a C++ program the statement is optional: the compiler automatically adds a return 0; if you don't explicitly return a value.
>
> The return value is the exit code of your program, the shell (or any other application that ran it) can read and use it.
>
> The 0 exit code is a widely accepted convention for 'OK the program execution was successful.

* [C语言中return 0和return 1和return -1](https://blog.csdn.net/baidu_35679960/article/details/77542787)

> **1、返回值int 类型的函数返回：**
> 	return语句用来结束循环，或返回一个函数的值。
>
> return 0：一般用在主函数结束时，按照程序开发的一般惯例，表示成功完成本函数。
> 	return -1：:表示返回一个代数值，一般用在子函数结尾。按照程序开发的一般惯例，表示该函数失败；
> 以上两个是约定俗成，系统提供的函数绝大部分定义为int类型返回值的都是这样的。返回值是返回给系统用的，给系统看得。一般做调试的时候也会用的，当出现错误的时候可以根据返回值来确定问题出在哪一个函数上的。
>
> 再次提醒，注意此时返回的类型是int。
>
> 
>
> **2、布尔类型返回：**
> 		return 0：返回假； 
> 		return 1：返回真；
> 一般这样的函数用来实现一个判断是否的逻辑，或检查有无的数据。返回真表示“是”，返回假表示“否”！如：isalpha()判断是否是字母 isdigit()判断是否是数字。
>
> c语言编译系统在给出逻辑运算结果时，以“1”表示真，以“0”表示假。例如：i = 1 > 3；则i的值为0。反之，i = 1 < 3；则i的值为1。
>




|      | 线性表 | 单链表 |
| ---- | ------ | ------ |
| 查找 | $O(1)$ | $O(n)$ |
| 插入 | $O(n)$ | $O(n)$ |
| 删除 | $O(n)$ | $O(n)$ |

**Attention:** 如果已经遍历到某位置指针后，插入和删除操作仅需要`$O(1)$`的复杂度，而线性表则需要移动指定位置之后的元素。

***

**Word 交叉引用的一些快捷设置：**

1. 开始 -> 定义新编号样式，添加参考文献；

2. 插入 -> 交叉引用；

3. 将引用形式调整为**上标**，多个引用形式注意**去掉中括号**，**添加短横线**，**添加逗号**等。

   **设置快捷键：**

* 文件 -> 自定义功能区 -> 自定义键盘快捷方式

* 引用 -> `InsertCrossReference`，指定为`Ctrl + 1`

* 开始 -> `Superscript`，指定为`Ctrl + 2`

* 全部命令 -> `Hidden`，指定为`Ctrl + 3`

![img](https://i.loli.net/2019/02/24/5c7213eb8d765.png)

***

**静态链表：**

1. 插入操作（malloc）

![insert](https://i.loli.net/2019/02/24/5c72483a74c97.png)

1. 删除操作（free）

![delete](https://i.loli.net/2019/02/24/5c724865cf98d.png)

注意：插入或者删除 均有三个主要变化!

* 插入时，表头cur，插入位置cur，插入位置前cur
* 删除时，表头cur，删除位置cur，表尾cur

***

**有序列表** 的 **二分查找**（binary search），`$O(log n)$`  其中， `log`为以2为底的对数，在实际运算时，可以用换底公式，因为计算时默认采用以10为底的对数。

***

时间复杂度为`$O(n!)$` 的**旅行商问题**

e.g. go through 5 cities

5 * 4 * 3 * 2 * 1

***

Given two strings, respectively called `S` and `T`. `S` contains a long **text**, `T` represents one **pattern** that used to match with `S`, which means `T` maybe a substring of `S`.

Here, `m, n` respectively stands for the length of string `S` and `T`.

* Brute-Force, `BF`, 朴素模式匹配算法，`$O(mn)$`
* `KMP` substring search, `$O(m+n)$`

prefix, 前缀

infix, 中缀

postfix/suffix, 后缀

* [Knuth–Morris–Pratt(KMP) Pattern Matching(Substring search)](https://www.youtube.com/watch?v=GTJr8OvyEVQ)
* [从头到尾彻底理解KMP](https://blog.csdn.net/v_july_v/article/details/7041827)
* [Why should I use a pointer rather than the object itself?](https://stackoverflow.com/questions/22146094/why-should-i-use-a-pointer-rather-than-the-object-itself)
* [C++中为什么要用指针，而不直接使用对象？](http://blog.jobbole.com/90147/)

***

**C++ 中的左值（Lvalues）和右值（Rvalues）**

C++ 中有两种类型的表达式：

- **左值（lvalue）：**指向内存位置的表达式被称为左值（lvalue）表达式。左值可以出现在赋值号的左边或右边。
- **右值（rvalue）：**术语右值（rvalue）指的是存储在内存中某些地址的数值。右值是不能对其进行赋值的表达式，也就是说，右值可以出现在赋值号的右边，但不能出现在赋值号的左边。

变量是左值，因此可以出现在赋值号的左边。数值型的字面值是右值，因此不能被赋值，不能出现在赋值号的左边。下面是一个有效的语句：

```
int g = 20;
```

但是下面这个就不是一个有效的语句，会生成编译时错误：

```
10 = 20;
```

***

**初始化局部变量和全局变量**

当局部变量被定义时，系统不会对其初始化，您必须自行对其初始化。定义全局变量时，系统会自动初始化为下列值：

| 数据类型 | 初始化默认值 |
| -------- | :----------- |
| int      | 0            |
| char     | '\0'         |
| float    | 0            |
| double   | 0            |
| pointer  | NULL         |

正确地初始化变量是一个良好的编程习惯，否则有时候程序可能会产生意想不到的结果。

***

**布尔常量**

布尔常量共有两个，它们都是标准的 C++ 关键字：

- **true** 值代表真。
- **false** 值代表假。

我们不应把 true 的值看成 1，把 false 的值看成 0。

***

**字符常量**，字符常量是括在单引号中

**字符串常量**，字符串字面值或常量是括在双引号 "" 中的

***

**定义常量**

在 C++ 中，有两种简单的定义常量的方式：

- 使用 **#define** 预处理器， `#define LENGTH 10 `
- 使用 **const** 关键字, `const int  LENGTH = 10;`

***

**C++ 中的类型限定符**

类型限定符提供了变量的额外信息。

英[ˈvɒlətaɪl]

美[ˈvɑ:lətl]

易变的

| 限定符   | 含义                                                         |
| -------- | ------------------------------------------------------------ |
| const    | **const** 类型的对象在程序执行期间不能被修改改变。           |
| volatile | 修饰符 **volatile** 告诉编译器不需要优化volatile声明的变量，让程序可以直接从内存中读取变量。对于一般的变量编译器会对变量进行优化，将内存中的变量值放在寄存器中以加快读写效率。 |
| restrict | 由 **restrict** 修饰的指针是唯一一种访问它所指向的对象的方式。只有 C99 增加了新的类型限定符 restrict。 |

***

**C++ 存储类**

存储类定义 C++ 程序中变量/函数的**范围（可见性）**和**生命周期**。这些说明符放置在它们所修饰的类型之前。

* auto

1. 声明变量时根据初始化表达式自动推断该变量的类型
2. 声明函数时函数返回值的占位符

* register

定义在寄存器中的局部变量（顾名思义），但由于硬件限制可能不在寄存器中

* static

1. 修饰全局变量时，比如多个文件同时在一个工程下面编译，则其中没有添加`static`前缀的变量或者函数，则拥有全局可见性，可被另一个函数可见。所以，`static`的一个作用就是**隐藏**。

```c++
//a.c
char a = 'A'; // global variable
void msg()
{
     printf("Hello\n");
}
 
//main.c
 
int main()
{
     extern char a; // extern variable must be declared before use
     printf("%c ", a);
     (void)msg();
     return 0;
}
```

输出：

```c++
A Hello
```

2. 修饰局部变量时，`static`会保持局部变量的值，指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。也就是说，进入局部作用域之后，只有第一次初始化会改变该局部变量的值，之后再次进入该局部作用域，上次局部变量保持的值并不会销毁，反而会保存，换言之，也就是说局部变量在其局部作用域内生命周期变长，但是一旦不进入该局部作用域内，可以认为生命周期“结束”。

```
＃include <stdio.h>
 
int fun(){
    static int count = 10; //在第一次进入这个函数的时候，变量a被初始化为10！并接着自减1，以后每次进入该函数，a
    return count--; //就不会被再次初始化了，仅进行自减1的操作；在static发明前，要达到同样的功能，则只能使用全局变量：    
 
}
 
int count = 1;
 
int main(void)
{
     printf("global\t\tlocal static\n");
     for(; count <= 10; ++count)
               printf("%d\t\t%d\n", count, fun());
     return 0;
}
```

输出：

```c++
global  local static

1 10

2 9

3 8

4 7

5 6

6 5

7 4

8 3

9 2

10 1
```

3. 默认初始化为0（类似全局变量的默认初始化）

```c++
＃include <stdio.h>
 
int a;
 
int main()
{
     int i;
     static char str[10];
     printf("integer: %d; string: (begin)%s(end)", a, str);
     return 0;
}
```

输出：

```c++
integer: 0; string: (begin) (end) 
```

4. 修饰类成员，静态数据成员是类的成员，但不是对象的成员

ref: [C++中static关键字作用总结](https://www.cnblogs.com/songdanzju/p/7422380.html)

[static 存储类](http://www.runoob.com/cplusplus/cpp-storage-classes.html)

* extern

*extern* 是用来在另一个文件中声明一个全局变量或函数

* mutable

仅仅适用于类的对象，`mutable`成员可以通过`const`成员函数修改

* thread_local

线程上使用

***

**杂项运算符**

| 运算符               | 描述                                                         |
| -------------------- | ------------------------------------------------------------ |
| sizeof               | [sizeof 运算符](http://www.runoob.com/cplusplus/cpp-sizeof-operator.html)返回变量的大小。例如，sizeof(a) 将返回 4，其中 a 是整数。 |
| Condition ? X : Y    | [条件运算符](http://www.runoob.com/cplusplus/cpp-conditional-operator.html)。如果 Condition 为真 ? 则值为 X : 否则值为 Y。 |
| ,                    | [逗号运算符](http://www.runoob.com/cplusplus/cpp-comma-operator.html)会顺序执行一系列运算。整个逗号表达式的值是以逗号分隔的列表中的最后一个表达式的值。 |
| .（点）和 ->（箭头） | [成员运算符](http://www.runoob.com/cplusplus/cpp-member-operators.html)用于引用类、结构和共用体的成员。 |
| Cast                 | [强制转换运算符](http://www.runoob.com/cplusplus/cpp-casting-operators.html)把一种数据类型转换为另一种数据类型。例如，int(2.2000) 将返回 2。 |
| &                    | [指针运算符 &](http://www.runoob.com/cplusplus/cpp-pointer-operators.html) 返回变量的地址。例如 &a; 将给出变量的实际地址。 |
| *                    | [指针运算符 *](http://www.runoob.com/cplusplus/cpp-pointer-operators.html) 指向一个变量。例如，*var; 将指向变量 var。 |

***

**函数参数**

| 调用类型                                                     | 描述                                                         |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
| [传值调用](http://www.runoob.com/cplusplus/cpp-function-call-by-value.html) | 该方法把参数的实际值复制给函数的形式参数。在这种情况下，修改函数内的形式参数对实际参数没有影响。 |
| [指针调用](http://www.runoob.com/cplusplus/cpp-function-call-by-pointer.html) | 该方法把参数的地址复制给形式参数。在函数内，该地址用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。 |
| [引用调用](http://www.runoob.com/cplusplus/cpp-function-call-by-reference.html) | 该方法把参数的引用复制给形式参数。在函数内，该引用用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数 |

***

**lambda 函数**

参考github中c++的README，可以把它看作对象使用，注意的是中括号内的capture方式

***

**c++数学运算：**

`double floor(double);`该函数返回一个小于或等于传入参数的最大整数，即向下取整

涉及随机数的三个函数：

`rand`, `srand`, `time`

需要加入头文件

`#include<ctime>`

`#include<cstdlib`

```c++
int i,j;
 
   // 设置种子
   srand( (unsigned)time( NULL ) );
 
   /* 生成 10 个随机数 */
   for( i = 0; i < 10; i++ )
   {
      // 生成实际的随机数
      j= rand();
      cout <<"随机数： " << j << endl;
   }
```

***

**C++ 数组**

definition: 存储相同类型、固定大小、连续内存单元的顺序集合

```c++
// declaration
double balance[10];

// initialization
double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
balance[4] = 50.0;

// access array element
double salary = balance[9];
```

**指向数组的指针：**

数组名是一个指向数组中第一个元素的常量指针

```c++
double *p;
double balance[10];

p = balance;
```

> C++ 中，将 **char \*** 或 **char[]** 传递给 **cout** 进行输出，结果会是整个字符串，如果想要获得字符串的地址（第一个字符的内存地址），可使用以下方法：
>
> 强制转化为其他指针（非 **char\***）。可以是 **void \*，int \*，float \*， double \*** 等。***** 使用 **&s[0]** 不能输出 **s[0]**（首字符）的地址。因为 **&s[0]** 将返回 **char\***，对于 **char\***（**char** 指针），**cout** 会将其作为字符串来处理，向下查找字符并输出直到字符结束 *****。

```c++
#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
	char  var[MAX] = { 'a', 'b', 'c' };
	char  *ptr;

	// point to the first address of array
	ptr = var;

	for (int i = 0; i < MAX; i++)
	{

		cout << "Address of var[" << i << "] = ";
		cout << (int *)ptr << endl;  // force convert char * to int *

		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;

		// move pointer to the next location
		ptr++;
	}
	cin.get();
	return 0;
}
```

输出：

```c++
Address of var[0] = 0055F814
Value of var[0] = a
Address of var[1] = 0055F815
Value of var[1] = b
Address of var[2] = 0055F816
Value of var[2] = c
```

**传递数组给函数**

> C++ **传数组给一个函数**，数组类型自动转换为指针类型，因而**传的实际是地址**。
>
> 如果您想要在函数中传递一个一维数组作为参数，您必须以下面三种方式来声明函数形式参数，这三种声明方式的结果是一样的，因为每种方式都会告诉编译器将要接收一个整型指针。同样地，您也可以传递一个多维数组作为形式参数

```c++
// 形参为指针
void myFunction(int *param) {}

// 形参为定义大小的数组
void myFunction(int param[10]) {}

// 形参为未定义大小的数组
void myFunction(int param[]) {}
```

例子：

```c++
// pass array parameter to func

#include <iostream>
using namespace std;

double getAverage(int *arr, int size);

int main(int argc, char const *argv[])
{
	int balance[5] = { 1000, 2, 3, 17, 50 };
	int *pt1 = balance;

	size_t balance_size = sizeof(balance) / sizeof(int);
	size_t pt1_size = sizeof(pt1);

	double avg;

	cout << "array size : " << balance_size << endl;
	cout << "pt1_size : " << pt1_size << endl;

	avg = getAverage(balance, 5);

	cout << "Mean value is ：" << avg << endl;

	cin.get();
	return 0;
}

double getAverage(int *arr, int size)
{
	int i, sum = 0;
	double avg;

	cout << "Inside getAverage sizeof(arr) = " << sizeof(arr) << endl;
	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}

	avg = double(sum) / size;
	return avg;
}
```

输出：

```c++
array size : 5
pt1_size : 4
Inside getAverage sizeof(arr) = 4
Mean value is ：214.4
```

**从函数返回数组**

示例：

```c++
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// func to generate and return random numbers
int * getRandom()
{
	static int  r[10];

	// set seed
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		r[i] = rand();
		cout << r[i] << endl;
	}

	return r;
}

int main()
{
	// prepare a pointer
	int *p;

	p = getRandom();
	for (int i = 0; i < 10; i++)
	{
		cout << "*(p + " << i << ") : ";
		cout << *(p + i) << endl;
	}

	cin.get();
	return 0;
}
```

输出：

```c++
1318
28766
26363
25223
31017
25376
32405
14162
26168
7906
*(p + 0) : 1318
*(p + 1) : 28766
*(p + 2) : 26363
*(p + 3) : 25223
*(p + 4) : 31017
*(p + 5) : 25376
*(p + 6) : 32405
*(p + 7) : 14162
*(p + 8) : 26168
*(p + 9) : 7906
```

**说明：**

1. C++ 不允许返回一个完整的数组作为函数的参数。但是，可以通过**指定不带索引的数组名**来返回一个指向数组的指针。如果想要从函数返回一个一维数组，必须声明一个返回指针的函数`int * getRandom() {}`
2. C++ 不支持在函数外返回局部变量的地址，除非定义局部变量为 **static** 变量. `static int  r[10];`