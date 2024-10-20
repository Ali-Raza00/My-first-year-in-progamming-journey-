
//FESCO Residential Electricity Bill Calculation without using loops and string function

#include<iostream>
using namespace std;
int main()
{
	int unit, i = 0;
	float tax,tunit;
	cout << "enter the number of units consumed in a month" << endl;
	cin >> unit;
	if (unit < 0)
	{
		cout << "invalid input (negative number)" << endl;
	}
	else if (unit >= 0 && unit <= 100)
	{
		tunit = unit * 5;
		i++;
	}
	else if (unit >= 101 && unit <= 300)
	{
		tunit = unit * 7;
		i++;
	}
	else if (unit >= 301 && unit <= 400)
	{
		tunit = unit * 24.40;
		i++;
	}
	else if (unit >= 401 && unit <= 500)
	{
		tunit = unit * 24.91;
		i++;
	}
	else if (unit >= 501 && unit <= 600)
	{
		tunit = unit * 26.15;
		i++;
	}
	else if (unit >= 601 && unit <= 700)
	{
		tunit = unit * 27.59;
		i++;
	}
	else
	{
		cout << "invalid input" << endl;
	}
	if (i > 0)
	{
		cout << "Total Bill (before tax):" << tunit << endl;
		tax = tunit * 0.1;
		cout << "Total Tax:" << tax << endl;
		tunit += tax;
		cout << "Total Bill (after tax):" << tunit << endl;
	}
	system("pause");
	return 0;
}
