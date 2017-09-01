#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x, y;
	cout << "enter the value: \n";
	cin >> x;
	cout << "enter the exponent \n";
	cin >> y;
	
	cout << x << " rasied to the exponent " << y << " is " << pow (x,y) << ".\n";
	return 0;
} 
