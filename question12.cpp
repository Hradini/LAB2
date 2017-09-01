#include <iostream>
using namespace std;

int main() {
	double principle, rate, time, compounded;
	cout << "enter the principle, rate of interest, time period and the number of times it is compounded \n" ;
	cin >> principle >> rate >> time >> compounded;
	
	cout << "the amount for the given principle is " << pow(principle *(1 + (rate/compounded)), (compounded*time) ;
	
	
	return 0;
}
