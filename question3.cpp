#include <iostream>
using namespace std;

int main() {
	double celsius, farenheit;
	cout << "Enter the temperature in farenheit: \n";
	cin >> farenheit;

	
	celsius = (farenheit - 32)/1.8;
	
	cout << "the temperature in celsius is" << celsius << "\n";
	
	return 0;
}
