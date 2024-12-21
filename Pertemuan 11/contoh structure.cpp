#include <iostream>
using namespace std;

int main ()
{
	struct mahasiswa 
	{
		char nim [9];
		char nama [15];
		float nilai
	};
	mahasiswa mahasiswa;
	
	cout << "Masukkan NIM : ";
	cin >> mahasiswa.nim;
	cout << "Masukkan Nama : ";
	cin >> mahasiswa.nama;
	cout << "Masukkan nilai akhir : ";
	cin >> mahasiswa.nilai;
	
	cout << "\nData yang diinput adalah : \n\n ";
	cout << "NIM : " << mahasiswa.nim << endl;
	cout << "Nama : " << mahasiswa.nama << endl;
	cout << "Nilai : " << mahasiswa.nilai << endl;

	getchar ();
}
