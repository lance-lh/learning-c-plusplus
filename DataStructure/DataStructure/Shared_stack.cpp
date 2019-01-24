
#include<iostream>
#define MAXSIZE 10

class SharedStack
{
public:
	int data[MAXSIZE] = { 0 };  // set all initial values to be zero
	int top1, top2;

	SharedStack()  // constructor
	{
		top1 = -1;
		top2 = MAXSIZE;
	}

	~SharedStack() { ; }  // destructor

	void Push(int stacknum, int x) //  first is to consider which stack is to be used, second parameter is data to be pushed into stack
	{
		if (top1 + 1 == top2)
		{
			std::cout << "The stack is full now!" << std::endl;
			return;  // zero, false
		}

		if (stacknum == 1)
			data[++top1] = x;
		if (stacknum == 2)
			data[--top2] = x;
	}

	int Pop(int stacknum)
	{
		if (stacknum == 1)
		{
			if (top1 == -1)
			{
				std::cout << "Stack Underflow!" << std::endl;
			}
			else
			{
				return data[top1--];
			}
		}

		if (stacknum == 2)
		{
			if (top2 == MAXSIZE)
			{
				std::cout << "Stack Underflow!" << std::endl;
			}
			else
			{
				return data[top2++];
			}
		}
	}
};

int main()
{
	SharedStack s;
	int val;

	s.Push(1, 2);
	s.Push(1, 5);
	s.Push(2, 1);
	s.Push(2, 7);

	for (int i : s.data)
	{
		std::cout << i << '\t';
	}
	std::cout << '\n';

	s.Pop(1);
	s.Pop(2);

	for (int i : s.data)
	{
		std::cout << i << '\t';
	}
	std::cout << '\n';

	std::cin.get();
	return 0;
}
