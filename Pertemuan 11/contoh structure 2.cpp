#include <iostream>
#include <string>
using namespace std;

struct siswa 
{
	int no_induk;
	string nama;
	float nilai;
};

int main ()
{
	siswa Arkan, Lukas;
	
	Arkan.no_induk = 1;
	Arkan.nama = "Arkan Januar";
	Arkan.nilai = 75.5;
	
	Lukas.no_induk = 2;
	Lukas.nama = "Lukas Laksono";
	Lukas.nilai = 89.9;
	
	cout << Arkan.nama << " dengan nomor induk " << Arkan.no_induk << " mendapatkan nilai " << Arkan.nilai << endl;
	cout << Lukas.nama << " dengan nomor induk " << Lukas.no_induk << " mendapatkan nilai " << Lukas.nilai << endl;
	
	return 0;
}
