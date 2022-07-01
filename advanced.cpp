#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	char oper;
	float x;
	cout << "Please choose an operator." << endl;
	cout << "^,|" << endl;
	cout << "'^' - Exponent, '|' - Square root" << endl;
	cout << "Operator:" << endl;
	//User enters operator needed.
	cin >> oper;
	cout << "Choose a number." << endl;
	cout << "Number:" << endl;
	//User enters number that needs to be operated upon.
	cin >> x;

	switch (oper)
	{	
		//Exponent operator calculating.
			
	case '^':
		cout << "Exponent of number " << x << " = " << x * x;
		break;
			
		//Square root operator calculating.
			
	case '|':
		cout << "Square root of number " << x << " = " << sqrt(x);
		break;
	}

	return 0;
}
