#include <iostream>
using namespace std;

int main ()
{
	int a, b;
	
	for (a = 1; a <= 5; a++)
	{
		for (b = a; b <= 5; b++)
		{
			cout << a << " ";
		}
		cout << endl;
	}
	getchar();
}
