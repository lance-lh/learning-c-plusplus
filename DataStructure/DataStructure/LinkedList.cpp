#include<iostream>

struct Node
{
	int data;
	Node* next;
};

class LinkedList
{
private:
	Node *head, *tail;
public:
	LinkedList()  // constructor
	{
		head = NULL;
		tail = NULL;
	}

	void CreateNode(int value)
	{
		Node* temp = new Node;
		temp->data = value;
		temp->next = NULL;

		if (head == NULL)  // empty linked list
		{
			head = temp;
			tail = temp;
			temp = NULL;
		}

		else  // linked list is not empty
		{
			tail->next = temp;
			tail = temp;
		}
	}
	void Display()
	{
		Node* temp = new Node;
		temp = head;
		while (temp != NULL)
		{
			std::cout << temp->data << "\t";
			temp = temp->next;
		}
		std::cout << "\n==================================================\n";
	}
	void Insert_start(int value)
	{
		Node* temp = new Node;
		temp->data = value;
		temp->next = head;
		head = temp;
	}
	void Insert_end(int value)  // same to CreateNode
	{
		Node* temp = new Node;
		temp->data = value;
		temp->next = NULL;
		tail->next = temp;
		tail = temp;
	}
	void Insert_position(int value, int pos)
	{
		Node* temp = new Node;	// to be inserted Node between pre and cur
		Node* pre = new Node;	// previous adjacent Node
		Node* cur = new Node;	// current Node

		cur = head;
		for (int i = 0; i < pos; i++)
		{
			pre = cur;
			cur = cur->next;
		}
		temp->data = value;
		pre->next = temp;
		temp->next = cur;
	}
	void Delete_start()
	{
		Node* temp = new Node;
		temp = head;
		head = head->next;
		delete temp;

		//head = head->next;
	}
	void Delete_end()
	{
		Node* cur = new Node;
		Node* pre = new Node;

		cur = head;
		while (cur->next != NULL)
		{
			pre = cur;
			cur = cur->next;  // traverse till the end, cur = tail
		}
		tail = pre;
		pre->next = NULL;
		delete cur;
	}
	void Delete_position(int pos)
	{
		Node* cur = new Node;
		Node* left = new Node;

		cur = head;
		for (int i = 0; i < pos; i++)
		{
			left = cur;
			cur = cur->next;
		}
		left->next = cur->next;
	}
	void Reverse()
	{
		Node* cur = new Node;
		Node* left = new Node;
		Node* right = new Node;

		left = NULL;
		right = NULL;
		cur = head;
		while (cur != NULL)
		{
			right = cur->next;
			cur->next = left;
			left = cur;
			cur = right;
		}
		head = left;
	}

};

int main()
{
	LinkedList ll;
	int values[4] = { 25,50,90,40 };
	for (int value : values)
	{
		ll.CreateNode(value);
	}
	std::cout << "===========create a list==========================\n";
	ll.Display();

	std::cout << "==========Insert at beginning=====================\n";
	ll.Insert_start(36);
	ll.Display();

	std::cout << "==========Insert at end===========================\n";
	ll.Insert_end(73);
	ll.Display();

	std::cout << "==========Insert at 2-th position=================\n";
	ll.Insert_position(98, 2);
	ll.Display();

	std::cout << "==========Delete start============================\n";
	ll.Delete_start();
	ll.Display();

	std::cout << "==========Delete end==============================\n";
	ll.Delete_end();
	ll.Display();

	std::cout << "==========Delete at 2-th position=================\n";
	ll.Delete_position(2);
	ll.Display();

	std::cout << "==========Reverse linked list=====================\n";
	ll.Reverse();
	ll.Display();

	std::cin.get();
}