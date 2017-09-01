#include <iostream>
using namespace std;

int main() {
	double A1, A2;
	cout << "enter two angles of a triangle \n";
	cin >> A1 >> A2;
	cout << "the third angle is " << 180 - (A1 + A2);
	
	return 0;
}
