#include <iostream>
using namespace std;

int main() {
	double m1, m2, m3, m4, m5 ;
	cout << "enter marks in 5 subjects out of hundred\n";
	cin >> m1 >> m2 >> m3 >> m4 >> m5 ;
	
	cout << "the total score in all the subjects is " << m1+ m2 +m3 +m4 + m5 << ". \n";
	cout << "the average score is " <<( m1+ m2 +m3 +m4 + m5)/5 << ".\n";
	cout << "the percentage is " <<( m1+ m2 +m3 +m4 + m5)/500 * 100 << ".\n";
	
	
	return 0;
}
