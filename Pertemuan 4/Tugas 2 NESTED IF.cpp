#include <iostream>
using namespace std;

int main ()
{
	string Nama, Hadiah;
	float a, b, c, Rata2;
	
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
	
	if (Rata2 >= 85) 
	{
		Hadiah = "komputer Core i5";
	}
	 else 
	 {
		if (Rata2 >= 70)
		{
		Hadiah = "uang sebesar Rp. 2.500.000";
		}
		else (Rata2 < 70); 
		{
		Hadiah = "hiburan";
		}
	}
	
	cout << "Siswa yang bernama " << Nama << endl;
	cout << "Memperoleh nilai rata-rata " << Rata2 << " dari hasil perlombaan yang diikutinya" << endl;
	cout << "Hadiah yang didapat adalah " << Hadiah;
	
	getchar();
}
