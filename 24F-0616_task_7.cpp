
//Conditional Decryption Scheme without using loops and function

#include<iostream>
using namespace std;
int main()
{
	char c1, c2, c3, c4, c5;
	int	check = 0;
	cout << "enter the 5 characters (A-Z)/(a-z) or digit (0-9) one by one by pressing enter" << endl;
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	if ((c1 >= 'A' && c1 <= 'Z') || (c1 >= 'a' && c1 <= 'z'))
	{
		if ((c2 >= 'A' && c2 <= 'Z') || (c2 >= 'a' && c2 <= 'z') || (c2 >= '0' && c2 <= '9'))
		{
			if ((c3 >= 'A' && c3 <= 'Z') || (c3 >= 'a' && c3 <= 'z') || (c3 >= '0' && c3 <= '9'))
			{
				if ((c4 >= 'A' && c4 <= 'Z') || (c4 >= 'a' && c4 <= 'z') || (c4 >= '0' && c4 <= '9'))
				{
					if ((c5 >= 'A' && c5 <= 'Z') || (c5 >= 'a' && c5 <= 'z') || (c5 >= '0' && c5 <= '9'))
					{
						/*cout << c1 << c2 << c3 << c4 << c5 << endl;*/
						if (c1 >= 'A' && c1 <= 'Z')
						{
							c1 -= 3;
							c2 -= 3;
							c3 -= 3;
							c4 -= 3;
							c5 -= 3;
							cout << c5 << c4 << c3 << c2 << c1 << " this is the result after applying Scheme 1" << endl;

						}
						else if (c1 >= 'a' && c1 <= 'z')
						{
							if (c1 == 'a')
							    c1 = 'e';
							else if (c1 == 'e')
								     c1 = 'i';
							else if (c1 == 'i')
								     c1 = 'o';
							else if (c1 == 'o')
								     c1 = 'u';
							else if (c1 == 'u')
								     c1 = 'a';
						    if (c2 == 'a')
								c2 = 'e';
							else if (c2 == 'e')
								c2 = 'i';
							else if (c2 == 'i')
								c2 = 'o';
							else if (c2 == 'o')
								c2 = 'u';
							else if (c2 == 'u')
								c2 = 'a';

							if (c3 == 'a')
								c3 = 'e';
							else if (c3 == 'e')
								c3 = 'i';
							else if (c3 == 'i')
								c3 = 'o';
							else if (c3 == 'o')
								c3 = 'u';
							else if (c3 == 'u')
								c3 = 'a';



							if (c4 == 'a')
								c4 = 'e';
							else if (c4 == 'e')
								c4 = 'i';
							else if (c4 == 'i')
								c4 = 'o';
							else if (c4 == 'o')
								c4 = 'u';
							else if (c4 == 'u')
								c4 = 'a';


							if (c5 == 'a')
								c5 = 'e';
							else if (c5 == 'e')
								c5 = 'i';
							else if (c5 == 'i')
								c5 = 'o';
							else if (c5 == 'o')
								c5 = 'u';
							else if (c5 == 'u')
								c5 = 'a';

							if (c2 >= 'A' && c2 <= 'Z')
							{
								c2 += 32;
							}
							else if (c2 >= 'a' && c2 <= 'z')
							{
								c2 -= 32;
							}
							if (c3 >= 'A' && c3 <= 'Z')
							{
								c3 += 32;
							}
							else if (c3 >= 'a' && c3 <= 'z')
							{
								c3 -= 32;
							}
							if (c4 >= 'A' && c4 <= 'Z')
							{
								c4 += 32;
							}
							else if (c4 >= 'a' && c4 <= 'z')
							{
								c4 -= 32;
							}
							if (c5 >= 'A' && c5 <= 'Z')
							{
								c5 += 32;
							}
							else if (c5 >= 'a' && c5 <= 'z')
							{
								c5 -= 32;
							}
							if (c1 >= 'a' && c1 <= 'z')
							{
								c1 -= 32;
							}
							cout << c1 << c2 << c3 << c4 << c5 << " this is the result after applying Scheme 2" << endl;
								
						}
					}
					else
					{
						cout << "invalid input becuase the character are not in given range" << endl;
		            }
				}
				else
				{
					cout << "invalid input becuase the character are not in given range" << endl;
	        	}
			}
			else
			{
				cout << "invalid input becuase the character are not in given range" << endl;
		    }
		}
		else
		{
			cout << "invalid input becuase the character are not in given range" << endl;
		}
	}
	else
	{
		cout<<"invalid input becuase the first letter should only be a alphabet "<<endl;
	}


	system("pause");
	return 0;

}


