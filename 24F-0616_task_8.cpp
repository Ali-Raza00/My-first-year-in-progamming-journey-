
//Smart Energy Billing without using loops and string function

#include<iostream>
using namespace std;
int main()
{
	int cnum, digit;
	float percentage, monthlyuse, peakuse;
	cout << "enter your 5-digit customer number" << endl;
	cin >> cnum;
	cout << "enter your monthly power usage in kWh" << endl;
	cin >> monthlyuse;
	if (cnum >= 10000 && cnum <= 99999)
	{
		digit = cnum / 10000;
		switch (digit)
		{
		case 0:
		case 4:
		case 6:
		case 8:
		{
			cout << "No discounts or surcharges. Final bill: Z" << endl;
			break;
		}
		case 2:
		case 3:
		case 5:
		case 7:
		{
			if (monthlyuse < 300)
			{
				cout << "10% discount applied. Final bill: X" << endl;
			}
			else
			{
				cout << "No discounts or surcharges. Final bill: Z" << endl;
			}
			break;
		}
		case 1:
		case 9:
		{
			cout << "enter peak-hour consumption in kWh." << endl;
			cin >> peakuse;
			percentage = (peakuse / monthlyuse) * 100;
			if (percentage > 50)
			{
				cout << "15% surcharge applied. Final bill: Y" << endl;
			}
			else
			{
				cout << "No discounts or surcharges. Final bill: Z" << endl;
			}
			break;
		}

		default:
			cout << "invalid input" << endl;
			break;
		}

	}
	else
	{
		cout << "invalid customer ID " << endl;
	}
	system("pause");
	return 0;

}
