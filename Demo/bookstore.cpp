#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{	
	/*
	Sales_item book;
	cin >> book;
	cout << book << endl;
	*/

	/*
	
	Sales_item item1, item2;
	cin >> item1 >> item2;
	if (item1.isbn() == item2.isbn()) { //member function
		cout << item1 + item2 << endl;
		return 0;
	}
	else {
		cerr << "Data must refer to same ISBN" << endl;
		return -1;
	}
	*/

	Sales_item total; // save next record variable
	if (cin >> total) {
		Sales_item trans;	//variables that save total
		while (cin >> trans) {
			if (total.isbn() == trans.isbn())
				total += trans;
			else {
				// print result of last book
				cout << total << endl;
				total = trans; // next book to total

			}
		}
		cout << total << endl;
	}
	else {
		// if no input, warn reader
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;


	system("pause");

}
