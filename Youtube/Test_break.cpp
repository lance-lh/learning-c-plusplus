/*After break statement the control is transferred 
to the statement immediately following the enclosing loop or switch.*/

#include<iostream>

int main()
{
	int i = 2;
	switch (i) {
	case 1: std::cout << "1";
	case 2: std::cout << "2";   //execution starts at this case label
	case 3: std::cout << "3";
	case 4:
	case 5: std::cout << "45";
		break;              //execution of subsequent statements is terminated
	case 6: std::cout << "6";
	}  // break, jump outside this curly brace to the following statement

	std::cout << '\n';

	for (int j = 0; j < 2; j++) {
		for (int k = 0; k < 5; k++) {         //only this loop is affected by break
			if (k == 2) break;
			std::cout << j << k << " ";
		}  // when k ==2, jump outside this curly brace to the following curly brace
	}

	std::cin.get();
}