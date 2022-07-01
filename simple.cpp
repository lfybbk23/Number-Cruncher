#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	char oper;
	float x, y;
	cout << "Please choose an operator." << endl;
	cout << "+,-,*,/" << endl;
	cout << " '+' - Add, '-' - Subtract, '*' - Multiply, '/' - Divide." << endl;
	cout << "Operator:" << endl;
	cin >> oper;
	cout << "Choose two numbers." << endl;
	cout << "First number:" << endl;
	cin >> x;
	cout << "Secound number." << endl;
	cin >> y;

	switch (oper)
	{
	case '+':
		cout << x << " + " << y << " = " << x + y;
		break;

	case '-':
		cout << x << " - " << y << " = " << x - y;
		break;

	case '*':
		cout << x << " * " << y << " = " << x * y;
		break;

	case '/':
		cout << x << " / " << y << " = " << x / y;
		break;

	default:
		cout << "Error, chosen operator is not listed.";
		break;
	}

	return 0;
}
