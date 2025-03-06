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

	 cout << "Bill for month 1: ";
		cin >> bill;
		while (bill >= 0.0)
		{
				totalBills += bill;
				months += 1;
				cout << "Bill for month " << months + 1 << ": ";
				cin >> bill;
		}  //end while
	
	
	if (months > 0)
	{avgBill = totalBills / months;
		cout << fixed << setprecision(2);
		cout << "Average electric bill: $" << avgBill << endl; }
	else
	{cout << "No electric bills entered." << endl;}
		

	
	
	
	return 0;
}	//end of main function