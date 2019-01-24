#include<iostream>

// define a linked list
struct Node 
{
	int data; 
	Node *next;
};

class Stack
{
public:
	Node *top; // data member
	Node *bottom;

	Stack()  // constructor
	{
		top = new Node;
		bottom = top;
		top->next = NULL;
	}

	~Stack() {}  // destructor

	void Push(int val) // insert element e at the top of stack
	{
		Node *p = new Node;  // create a new node p on the heap
		p->data = val; // put e into data field of p
		p->next = top; // new node p points to empty node S
		top = p; // modify stack top as p
	}

	bool Pop(int &val) // delete element at the top of stack, denote the element as e
	{
		if (top == bottom) // check stack status
			return false;

		Node *p = top; 
		val = p->data;
		top = top->next; //save top node(pointer)to prepare freeing top
		delete p; // free top node space
		return true;
	}

	void Traverse()
	{
		Node* temp = top;
		while (temp != bottom)
		{
			std::cout << temp->data << "\t";
			temp = temp->next;
		}
		std::cout << "\n==================================================\n";
	}
};


int main()
{
	Stack s;
	int val;

	s.Push(1);
	s.Push(2);
	s.Push(3);
	s.Push(4);
	s.Push(5);

	s.Traverse();

	s.Pop(val);
	std::cout << " Popped value is£º" << val << std::endl;

	s.Traverse();
	
	std::cin.get();

	return 0;
}
