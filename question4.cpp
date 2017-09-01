#include <iostream>
using namespace std;

int main() {
	int input, days, weeks, years;
	cout << "please enter the total number of days: \n";
	cin >> input;
	
	years = input / 365;
	weeks =  (input % 365)/7;
	days = (input % 365) % 7;
	
	cout << "the years are " << years << " and the weeks are " << weeks << " and the days are " << days << ". \n";
	
	return 0;
}
