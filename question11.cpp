#include <iostream>
using namespace std;

int main() {
	double principle, rate, time;
	cout << "enter the principle, rate of interest and time period \n" ;
	cin >> principle >> rate >> time ;
	
	cout << "the simple interst for the given principle is " << principle * rate * time/100 ;
	
	
	return 0;
}
