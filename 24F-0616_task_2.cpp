
//Monthly Income Tax Calculation for Pakistani Citizens without using loops and string function

#include<iostream>
using namespace std;
int main()
{
	float annualtax,montax,tannualtax;
	int income, select;
	char select2;
	cout << "enter you annual income" << endl;
	cin >> income;
	cout << "enter 1 for salaried or 2 for non-salaried." << endl;
	cin >> select;
	if (select == 1)
	{
		if (income <= 600000)
		{
			annualtax = 0;
		}
		else if (income >= 600001 && income <= 1200000)
		{
			income = income - 600000;
			annualtax = income * 0.025;
		}
		else if (income >= 1200001 && income <= 2400000)
		{
			income = income - 1200000;
			annualtax = (income * 0.125) + 15000;
		}
		else if (income >= 2400001 && income <= 3600000)
		{
			income = income - 2400000;
			annualtax = (income * 0.2) + 165000;
		}
		else if (income >= 3600001 && income <= 6000000)
		{
			income = income - 3600000;
			annualtax = (income * 0.25) + 405000;
		}
		else if (income >= 6000001)
		{
			income = income - 6000000;
			annualtax = (income * 0.325) + 1005000;
		}
		cout << "teacher in a non - profit organization by entering 'y'/'n'" << endl;
		cin >> select2;
		if (select2 == 'y' || select2 == 'Y')
		{
			tannualtax = annualtax * 0.25;
			annualtax = annualtax - tannualtax;
		}
		montax = annualtax / 12;
		cout <<"monthly tax dedution is " << montax << endl;

	}
	else if (select == 2)
	{
		if (income <= 600000)
		{
			annualtax = 0;
		}
		else if (income >= 600001 && income <= 1200000)
		{
			income = income - 600000;
			annualtax = income * 0.05;
		}
		else if (income >= 1200001 && income <= 2400000)
		{
			income = income - 1200000;
			annualtax = (income * 0.125) + 30000;
		}
		else if (income >= 2400001 && income <= 3600000)
		{
			income = income - 2400000;
			annualtax = (income * 0.175) + 180000;
		}
		else if (income >= 3600001 && income <= 6000000)
		{
			income = income - 3600000;
			annualtax = (income * 0.22) + 390000;
		}
		else if (income >= 6000001)
		{
			income = income - 6000000;
			annualtax = (income * 0.3) + 975000;
		}
		cout << "teacher in a non - profit organization by entering 'y'/'n'" << endl;
		cin >> select2;
		if (select2 == 'y' || select2 == 'Y')
		{
			tannualtax = annualtax * 0.25;
			annualtax = annualtax - tannualtax;
		}
		montax=annualtax/12;
		cout <<"monthly tax deduction is " << montax << endl;

	}
	
	else
	{
		cout << "invalid selection" << endl;
	}
	system("pause");
	return 0;
}