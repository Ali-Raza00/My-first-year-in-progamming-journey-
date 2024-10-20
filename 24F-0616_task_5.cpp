
//Eligible for the loan or not without using loops and string function 

#include<iostream>
using namespace std;
int main()
{
	int annualincome, creditscore, dti, employmentst;
	cout << "enter your annaul income" << endl;
	cin >> annualincome;
	if (annualincome >= 1500000)
	{
		cout << "enter your creditscore" << endl;
		cin >> creditscore;
		if (creditscore > 700)
		{
			cout << "enter your Debt-to-income (DTI) ratio in precentage:" << endl;
			cin >> dti;
			if (dti < 35)
			{
				cout << "enter your Employment status in years: " << endl;
				cin >> employmentst;
				if (employmentst >= 2)
				{
					cout << "congratulation you are eligible for the loan." << endl;
				}
				else
					cout << "insufficient employment duration";
			}
			else
			{
				cout << "Too high debt-to-income ratio " << endl;
			}
		}
		else
		{
			cout << "credit score too low" << endl;
		}
	}
	else
	{
		cout << "income too low" << endl;
	}

	system("pause");
	return 0;

}