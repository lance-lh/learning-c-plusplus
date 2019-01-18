#include<iostream>

#define MAXSIZE 5

class Stack
{
public:
	int top;
	int a[MAXSIZE] = {0};  // for convience, I initialize all elements to be 0

	Stack()
	{
		top = -1; // initialize stack to be empty
	}
	 

	bool Push(int x) // when pushing, move top first because of the inavailable state of the original stack
	{
		if (top >= (MAXSIZE - 1))
		{
			std::cout << "Stack Overflow!" << std::endl;
			return false;
		}
		else
		{
			a[++top] = x;
			std::cout << x << " is pushed into stack" << std::endl;
			return true;
		}	
	}

	int Pop(int &val) // when poping, return deleted data first and then move top
	{
		if (top < 0)
		{
			std::cout << "Stack Underflow!" << std::endl;
			return 0;
		}
		else
		{
			int x = a[top--];
			return x;
		}
	}

	void Display()  // traverse
	{
		int p = top;
		while (p != -1)
		{
			std::cout << a[p--] << '\t';
		}
		std::cout << '\n';
	}
	
};

int main()
{
	Stack s;
	int val;
	s.Push(10);
	s.Push(20);
	s.Push(30);
	std::cout << "===push three elements into stack implemented by array===" << std::endl;
	s.Display();

	s.Pop(val);
	std::cout << "===first pop===" << std::endl;
	s.Display();

	s.Pop(val);
	std::cout << "===second pop===" << std::endl;
	s.Display();

	std::cin.get();
}