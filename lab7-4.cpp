//Lab7-4.cpp - displays the average electric bill
//Created/revised by <Aaron Bloodworth> on <05MAR25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	int months = 0;
	double avgBill = 0.0;
	double bill = 0.0;
	double totalBills = 0.0;

	while (bill >= 0.0)
	if (months > 0) { 

		cout << "Bill for month 1:" << bill << endl;
		cin >> bill;
		cout << "Enter the electric bill for month (negative number to end) " << months + 1 << ": ";
		cin >> bill;

		
		totalBills += bill;
		months += 1;
	}
	else cout << "No bill amount entered." << endl;

	cout << fixed << setprecision(2);
	cout << "Average electric bill for " << months << " months: $" << avgBill << endl;

	

	
	return 0;
}	//end of main function