int main()
{
	char oper;
	float x;
	cout << "Please choose an operator." << endl;
	cout << "^,|" << endl;
	cout << "'^' - Exponent, '|' - Square root" << endl;
	cout << "Operator:" << endl;
	cin >> oper;
	cout << "Choose a number." << endl;
	cout << "Number:" << endl;
	cin >> x;


	switch (oper)
	{
	case '^':
		cout << "Exponent of number " << x << " = " << x * x;
		break;
	case '|':
		cout << "Square root of number " << x << " = " << sqrt(x);
		break;
	}

	return 0;
}
