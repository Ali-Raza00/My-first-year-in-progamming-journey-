//Binary to Decimal without using loops and string function
//Octal to Decimal without using loops and string function

#include<iostream>
using namespace std;
int main()
{
	int select, num,nsum=0, digit,numdigit, final_result, p = 0;
	cout << "enter 1 for binary and 2 for octal" << endl;
	cin >> select;
	cout << "enter a number" << endl;
	cin >> num;
	if (num >= 100 && num <= 99999)
	{
		switch (select)
		{
		case 1:
		{
			digit = num % 10;
			num = num / 10;
			if (digit == 1 || digit == 0)
			{
				final_result = digit;
				p++;
			}
			else
			{
				cout << "invalid input" << endl;
				break;
			}
			digit = num % 10;
			num = num / 10;
			if (digit == 1 || digit == 0)
			{
				final_result = final_result + (digit * pow(2, p));
				p++;
			}
			else
			{
				cout << "invalid input" << endl;
				break;
			}
			digit = num % 10;
			num = num / 10;
			if (digit == 1 || digit == 0)
			{
				final_result = final_result + (digit * pow(2, p));
				p++;
			}
			else
			{
				cout << "invalid input" << endl;
				break;
			}
			if (num > 0)
			{
				digit = num % 10;
				num = num / 10;
				if (digit == 1 || digit == 0)
				{
					final_result = final_result + (digit * pow(2, p));
					p++;
				}
				else
				{
					cout << "invalid input" << endl;
					break;
				}
			}
			if (num > 0)
			{
				digit = num % 10;
				num = num / 10;
				if (digit == 1 || digit == 0)
				{
					final_result = final_result + (digit * pow(2, p));
					p++;
				}
				else
				{
					cout << "invalid input" << endl;
					break;
				}
			}
			cout << final_result << " is the value in decimal" << endl;
			break;
		}
		case 2:
		{
			digit = num % 10;
			num = num / 10;
			if (digit >= 0 && digit <= 7)
			{
				final_result = digit;
				p++;
			}
			else
			{
				cout << "invalid input" << endl;
				break;
			}
			digit = num % 10;
			num = num / 10;
			if (digit >= 0 && digit <= 7)
			{
				final_result = final_result + (digit * pow(8, p));
				p++;
			}
			else
			{
				cout << "invalid input" << endl;
				break;
			}
			digit = num % 10;
			num = num / 10;
			if (digit >= 0 && digit <= 7)
			{
				final_result = final_result + (digit * pow(8, p));
				p++;
			}
			else
			{
				cout << "invalid input" << endl;
				break;
			}
			if (num > 0)
			{
				digit = num % 10;
				num = num / 10;
				if (digit >= 0 && digit <= 7)
				{
					final_result = final_result + (digit * pow(8, p));
					p++;
				}
				else
				{
					cout << "invalid input" << endl;
					break;
				}
			}
			if (num > 0)
			{
				digit = num % 10;
				num = num / 10;
				if (digit >= 0 && digit <= 7)
				{
					final_result = final_result + (digit * pow(8, p));
					p++;
				}
				else
				{
					cout << "invalid input" << endl;
					break;
				}
			
			}
			cout << final_result << " is the value in decimal" << endl;
			break;
		}


		default:
			cout << "invalid selection" << endl;
			break;
		}

		
	}
	

else
{
	cout << "invalid number" << endl;
}
system("pause");
return 0;

}
