
//Recursive Rightmost Digit Manipulation without using loops and string function

#include<iostream>
using namespace std;
int main()
{
	int num, digit, count;
	cout << "enter the number 6 digit long" << endl;
	cin >> num;
	if (num >= 100000 && num <= 999999)
	{
		digit = num % 10;
		num /= 10;
		if (digit % 2 == 0)
		{
			num += 1;
		}
		else
		{
			num -= 1;
		}
		if (num >= 99999)
		{
			num -= 2;
			digit = num % 10;
			num /= 10;
			if (digit % 2 == 0)
			{
				num += 1;
			}
			else
			{
				num -= 1;
			}
		}
		else
		{
			digit = num % 10;
			num /= 10;
			if (digit % 2 == 0)
			{
				num += 1;
			}
			else
			{
				num -= 1;
			}
		}
		if (num >= 9999)
		{
			num -= 2;
			digit = num % 10;
			num /= 10;
			if (digit % 2 == 0)
			{
				num += 1;
			}
			else
			{
				num -= 1;
			}
		}
		else
		{
			digit = num % 10;
			num /= 10;
			if (digit % 2 == 0)
			{
				num += 1;
			}
			else
			{
				num -= 1;
			}
		}
		if (num >= 999)
		{
			num -= 2;
			digit = num % 10;
			num /= 10;
			if (digit % 2 == 0)
			{
				num += 1;
			}
			else
			{
				num -= 1;
			}
		}
		else
		{
			digit = num % 10;
			num /= 10;
			if (digit % 2 == 0)
			{
				num += 1;
			}
			else
			{
				num -= 1;
			}
		}
		if (num >= 99)
		{
			num -= 2;
			digit = num % 10;
			num /= 10;
			if (digit % 2 == 0)
			{
				num += 1;
			}
			else
			{
				num -= 1;
			}
		}
		else
		{
			digit = num % 10;
			num /= 10;
			if (digit % 2 == 0)
			{
				num += 1;
			}
			else
			{
				num -= 1;
			}
		}
		if (num >= 9)
		{
			num -= 2;
		}
		
		cout <<"the final result will be " << num << endl;
		
	}
	else
	{
		cout << "invalid input" << endl;
	}
	system("pause");
	return 0;

}