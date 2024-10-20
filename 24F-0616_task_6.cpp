
//Secure Login System with Multi-Layer Authentication without using loops and string function

#include<iostream>
using namespace std;
int main()
{
	int username = 888888, password = 999999, otp = 123987;
	int inusername, inpassword, inotp, check = 0;
	cout << "enter the user name (integer)" << endl;
	cin >> inusername;
	cout << "enter the password (integer)" << endl;
	cin >> inpassword;
	if (username == inusername && password == inpassword)
	{
		cout << "enter 2 factor authentication code OTP (6 digit)" << endl;
		cin >> inotp;
		if (inotp == otp)
		{
			cout << "login successfully" << endl;

		}
		else
		{
			cout << "incorrect otp" << endl;
			check++;
		}
	}
	else
	{
		cout << "incorrect username or password" << endl;
		check++;
	}
	if (check > 0)
	{
		cout << "login failed" << endl;
	}
	system("pause");
	return 0;

}