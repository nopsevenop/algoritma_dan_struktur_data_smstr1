#include <iostream>
using namespace std;

void program_pointer (int *a) 
{
	if (*a % 2 == 0) 
	{
    	cout << "200 201 200"; 
    } else 
	{
        cout << "201 "; 
    }
}

int main () 
{
    int a;
    cout << "Masukkan bilangan = ";
    cin >> a;

    program_pointer (&a);

    return 0;
}
