#include <iostream>
using namespace std;

int main() {
	double celsius, farenheit;
	cout << "Enter the temperature in celsius: \n";
	cin >> celsius;
	farenheit = (1.8*celsius)+32;
	
	cout << "the temperature in farenheit is" << farenheit << "\n";
	
	return 0;
