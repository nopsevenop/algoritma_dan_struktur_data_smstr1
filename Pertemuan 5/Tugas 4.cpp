#include <iostream>
using namespace std;

int main ()
{
	int a, b;
  	bool prima = true; 	
 	cout << "Masukkan sebuah bilangan positif = ";
  	cin >> b;

	if (b == 0 || b == 1) 
	{
    	prima = false;
  	}
  	for (a = 2; a <= b / 2; ++a) 
	{
    	if (b % a == 0) 
		{
		prima = false; 
		}
	}
	
	if (prima)
   	cout << b << " Termasuk bilangan prima";
 	else
    cout << b << " Bukan termasuk bilangan prima";
  	return 0;
}
