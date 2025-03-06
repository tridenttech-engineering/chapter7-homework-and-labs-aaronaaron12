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


	while  (bill >=0 && bill != -1)
		{cout << "Enter the electric bill for month (-1 to stop) " << months + 1 << ": ";
	cin >> bill;
	totalBills += bill;
	months += 1;}
	
	
	if (months > 0)
	{avgBill = totalBills / months;
		cout << fixed << setprecision(2);
		cout << "Average electric bill: $" << avgBill << endl; }
	else
	{cout << "No electric bills entered." << endl;}
		

	
	
	
	return 0;
}	//end of main function