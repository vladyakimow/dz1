#include <iostream>
using namespace std;

int main() { 
	int c;
	double far;
	cout << "Please enter a Celsius value: ";
	cin >> c;
	far = 1.8*c + 32.0;
	cout << c << " degrees Celsius is " << far << " degrees Fahrenheit" << endl;
    return 0; 
}
