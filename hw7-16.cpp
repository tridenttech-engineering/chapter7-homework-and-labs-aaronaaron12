//hw7-16.cpp - displays three tip amounts
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double bill = 0.0;
	

	cout << "Bill amount: ";
	cin >> bill;

	cout << fixed << setprecision(2);
	cout << "10% tip: $" << bill * 0.10 << endl;
	cout << "15% tip: $" << bill * 0.15005 << endl;
	cout << "20% tip: $" << bill * 0.20 << endl;
	

	

	
	return 0;
}

