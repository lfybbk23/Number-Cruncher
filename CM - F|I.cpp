#include <iostream>
using namespace std;
int main() {
    float cm, feet, inches;

    cout << "Enter the length in centimeters: ";
    cin >> cm;

    inches = cm / 2.54;
    feet = inches / 12;

    cout << cm << " cm is equals to: " << inches << " inches" << endl;
    cout << cm << " cm is equals to: " << feet << " feet";
    return 0;
}
