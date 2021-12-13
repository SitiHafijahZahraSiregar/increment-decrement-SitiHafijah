#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	
	// POST INCREMENT
	cout << a++ << " ";
	cout << a;

	cout << endl << endl;

	int b = 1;

	// PRE INCREMENT
	cout << ++b << " ";
	cout << b;

	cout << endl << endl;

	int c = 1;
	
	// POST DECREMENT
	cout << c-- << " ";
	cout << c;

	cout << endl << endl;

	int d = 1;

	// PRE INCREMENT
	cout << --d << " ";
	cout << d;
	return 0;
}