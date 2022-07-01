#include <cmath>
using namespace std;

int main() 
{
	float a, b, c, x1, x2, discriminant, real, imaginary;
	cout << "Enter elements a, b and c: ";
	cin >> a >> b >> c;
	discriminant = b * b - 4 * a * c;

	//First variation.
	
	if (discriminant > 0) 
	
	{
		x1 = (-b + sqrt(discriminant)) / (2 * a);
		x2 = (-b - sqrt(discriminant)) / (2 * a);
		cout << "Roots are real and different." << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	
	//Second variation.

	else if (discriminant == 0) 
	
	{
		cout << "Roots are real and same." << endl;
		x1 = -b / (2 * a);
		cout << "x1 = x2 =" << x1 << endl;
	}

	else 
	
	{
		real = -b / (2 * a);
		imaginary = sqrt(-discriminant) / (2 * a);
		cout << "Roots are hard to determine and different." << endl;
		cout << "x1 = " << real << "+" << imaginary << "i" << endl;
		cout << "x2 = " << real << "-" << imaginary << "i" << endl;
	}

	return 0;
}
