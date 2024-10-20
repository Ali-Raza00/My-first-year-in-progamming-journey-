
//Advanced Health Insurance Premium Calculator without using loops and string function

#include<iostream>
using namespace std;
int main()
{
	int age, Preexisting,control=1;
	char smoke;
	float premiums,expremiums;
	cout << "enter your age" << endl;
	cin >> age;
	cout << "enter the number of pre existing conditions" << endl;
	cin >> Preexisting;
	if (age > 0 && age < 18)
	{
		premiums = 2000;
	}
	else if (age >= 18 && age <= 30)
	{
		premiums = 3500;
	}
	else if (age >= 31 && age <= 50)
	{
		premiums = 5000;
	}
	else if (age >= 51)
	{
		premiums = 8000;
	}
	else
	{
		cout << "invalid age " << endl;
		control--;
	}
	if (control == 1)
	{
		if (Preexisting == 1)
		{
			expremiums = premiums * 0.25;
			premiums += expremiums;
		}
		else if (Preexisting > 1)
		{
			expremiums = premiums * 0.5;
			premiums += expremiums;
		}
		else
		{
			cout << "invalid pre existing condition" << endl;
			control--;
		}
		if (control == 1)
		{
			cout << "Do you smoke y/n" << endl;
			cin >> smoke;
			if (smoke == 'y' || smoke == 'Y')
			{
				expremiums = premiums * 0.2;
				premiums += expremiums;
			}
			else
			{
				cout << "invalid input" << endl;
				control--;
			}

		}
	}
	if (control == 1)
	{
		cout << "total monthly premium will be " << premiums << endl;
	}

	system("pause");
	return 0;
}