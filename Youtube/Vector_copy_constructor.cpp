#include <iostream>
#include <vector>
using namespace std;

class A
{
public:
	A() { cout << "A constructor" << endl; }
	A(const A& rhs) { cout << "A copy constructor" << endl; }
};

int main()
{
		vector <A> v;
		cout << "capacity: " << (int)v.capacity() << endl;
		cout << "About to push_back 1st element" << endl;
		v.push_back(A());

		cout << "capacity: " << (int)v.capacity() << endl;
		cout << "About to push_back 2nd element" << endl;
		v.push_back(A());

		cout << "capacity: " << (int)v.capacity() << endl;
		cout << "About to push_back 3rd element" << endl;
		v.push_back(A());

		cout << "capacity: " << (int)v.capacity() << endl;
		cout << "About to push_back 4th element" << endl;
		v.push_back(A());

		cin.get();
}

/*

results:

	capacity: 0
	About to push_back 1st element
	A constructor
	A copy constructor
	capacity: 1
	About to push_back 2nd element
	A constructor
	A copy constructor
	A copy constructor
	capacity: 2
	About to push_back 3rd element
	A constructor
	A copy constructor
	A copy constructor
	A copy constructor
	capacity: 3
	About to push_back 4th element
	A constructor
	A copy constructor
	A copy constructor
	A copy constructor
	A copy constructor
*/