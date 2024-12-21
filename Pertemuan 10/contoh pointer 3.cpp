#include <iostream>
using namespace std;

int main ()
{
	int ilham;
	int *raka;
	int **amir;
	ilham = 75;
	
	cout << "Nilai Ilham = " << ilham << endl;
	raka = &ilham;
	amir = &raka;
	
	cout << "Nilai Raka Hasil Mengakses Ilham = " << *raka << endl;
	cout << "Nilai Amir Hasil Mengakses Ilham = " << **amir << endl;
	
	getchar ();
}
