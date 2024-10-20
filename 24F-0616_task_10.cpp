
//Trip Planner for Weather Conditions without using loops and string function

#include<iostream>
using namespace std;
int main()
{
	int wind, check = 0;
	float temp;
	char c1,c2,c3,c4,c5;
	cout << "enter the weather condition sunny, rainy, snowy, or foggy." << endl;
	cin >>c1>>c2>>c3>>c4>>c5;
	cout << "enter the Temperature in degrees Celsius." << endl;
	cin >> temp;
	cout << "enter the Wind speed in km/h." << endl;
	cin >> wind;
	if (!((c1 == 's' || c1 == 'S') && (c2 == 'u' || c2 == 'U') && (c3 == 'N' || c1 == 'n') && (c4 == 'n' || c4 == 'N') && (c5 == 'y' || c5 == 'Y')))
	{
		check++;
	}
	if (temp < 10 && temp > 40)
	{
		check++;
	}
	if (wind > 50)
	{
		check++;
	}
	if (check == 0)
	{
		cout << "You can go for trip" << endl;
	}
	else
	{
		cout << "You cannot go for trip" << endl;
	}

	system("pause");
	return 0;

}