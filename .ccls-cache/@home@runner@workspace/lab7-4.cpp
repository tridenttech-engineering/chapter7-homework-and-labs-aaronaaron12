//Lab7-4.cpp - displays the average electric bill
//Created/revised by <Aaron Bloodworth> on <05MAR25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	
	double avgBill = 0.0;
	double bill = 0.0;
	double totalBills = 0.0;
	int months = 0;

	//Enter bill for month 1
	if 
	 (months > 0)
	cout << "Bill for month 1: ";
	cin >> bill; }

	else
	cout << "No bill amount entered." << endl;
	//Enter number of months
	cout << "Number of months: ";
	months += 1;
	cin >> months;
	
	while (bill >= 0.0)

		//Enter remaining months
	cout << "Bill for month " << months + 1 << ": ";
	cin >> bill;
	
	//Display bill avergae
	cout << "Average electric bill for " << months << " months: $" << avgBill << endl;
	cout << fixed << setprecision(2);
	
	months += 1;
	
	
	
	return 0;
}	//end of main function