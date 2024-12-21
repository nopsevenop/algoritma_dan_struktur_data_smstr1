#include <iostream>
using namespace std;

int main ()
{
	int a, b, c;
	cout << "Input jumlah baris = ";
	cin >> a;
	cout << endl;
	
	for (b = 0; b < a; b++)
	{
		for (c = -a; c < a; c++)
		{
			if (-b <= c && c < b)
			{
				cout << "  ";
			}
			else
			{
				cout << "* ";
			}	
		}
	cout << endl;
	}
	
	for (b = 1; b <= a; b++)
	{
		for (c = -a; c < a; c++)
		{
			if (-(a - b) <= c && c < (a - b))
			{
				cout << "  ";
			}
			else
			{
				cout << "* ";
			}
		}
	cout << endl;
	}
	return 0;
}
