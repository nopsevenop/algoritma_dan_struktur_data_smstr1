#include <iostream>
using namespace std;

int main ()
{
	string Nama;
	int a, b, c, Rata2;
	
	cout << "Program Hitung Nilai Rata - Rata" << endl;
	cout << "Nama Siswa : ";
	cin >> Nama;
	cout << "Nilai Pertandingan I\t: ";
	cin >> a;
	cout << "Nilai Pertandingan II\t: ";
	cin >> b;
	cout << "Nilai Pertandingan III\t: ";
	cin >> c;
	Rata2 = (a + b + c) / 3;
	
	cout << "Siswa yang bernama " << Nama << endl;
	cout << "Memperoleh nilai rata-rata " << Rata2 << " dari hasil perlombaan yang diikutinya" << endl;
	
	switch (Rata2)
	{
		case 1 ... 69 :
		cout << "Hadiah yang didapat adalah hiburan";
			break;
		case 70 ... 84 :
		cout << "Hadiah yang didapat adalah uang sebesar Rp. 2.500.000";
			break;
		case 85 ... 100 :
		cout << "Hadiah yang didapat adalah komputer Core i5";
			break;	
	}
	getchar();
}
