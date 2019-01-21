#include<iostream>
#define MAXSIZE 10

class SharedStack
{
public:
	int a[MAXSIZE] = { 0 };
	int top1, top2;

	SharedStack()  // constructor
	{
		top1 = -1;
		top2 = MAXSIZE;
	}

	~SharedStack() {}  // destructor

	int Push(int value, int stacknum) // first parameter is data to be pushed into stack, second is to consider which stack is to be used
	{
		if (top1 + 1 == top2)
		{
			std::cout << "The stack is full now!" << std::endl;
			return false;
		}

		switch (stacknum)
		{
		case 1:
			a[++top1] == value;
			break;
		case 2:
			a[--top2] = value;
			break;
		}
		return true;
	}
};

int main()
{
	SharedStack s;

	s.Push(2, 1);
	s.Push(5, 1);
	s.Push(1, 2);
	s.Push(7, 2);

	for (int i : s.a)
	{
		std::cout << i << '\t';
	}
	std::cout << '\n';

	std::cin.get();
}