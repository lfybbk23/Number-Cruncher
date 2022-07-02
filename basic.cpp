#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	char oper;
	float x, y;
	cout << "Please choose an operator." << endl;
	cout << "+,-,*,/,^" << endl;
	cout << " '+' - Add, '-' - Subtract, '*' - Multiply, '/' - Divide, '^' - Exponent." << endl;
	cout << "Operator:" << endl;
	cin >> oper;
	cout << "Choose two numbers." << endl;
	cout << "First number(base):" << endl;
	cin >> x;
	cout << "Secound number(exponent)." << endl;
	cin >> y;

	switch (oper)
	{

		//Addition.

	case '+':
		cout << x << " + " << y << " = " << x + y;
		break;

		//Subtraction.

	case '-':
		cout << x << " - " << y << " = " << x - y;
		break;

		//Multiplication.

	case '*':
		cout << x << " * " << y << " = " << x * y;
		break;

		//Division.

	case '/':
		cout << x << " / " << y << " = " << x / y;
		break;

		//Exponent.

	case '^':
		cout << x << "^" << y << " = " << pow(x, y);
			break;
		//Error message.

	default:
		cout << "Error, chosen operator is not listed.";
		break;
	}

	return 0;
}
