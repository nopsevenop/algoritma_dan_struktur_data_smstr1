#include <iostream>
using namespace std;

int main ()
{
	int ilham, amir, *raka;
	
	ilham = 75;
	amir = ilham;
	raka = &ilham;
	
	cout << "Nilai Ilham = " << ilham << endl;
	cout << "Nilai Amir = " << amir << endl;
	cout << "Nilai Raka = " << raka << endl;
	
	getchar ();
}
