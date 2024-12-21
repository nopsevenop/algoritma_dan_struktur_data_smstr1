#include <iostream>
using namespace std;

int hitung_pangkat (int a, int b) 
{
    if (b == 0)
	{
        return 1;
	}
    else
	{
    	return a * hitung_pangkat (a, b - 1);
	}
}

int main () 
{
    cout << "MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF" << endl;
    	
    int a, b;
    cout << "\nMasukkan Nilai X = ";
    cin >> a;
    cout << "Masukkan Nilai Y = ";
    cin >> b;

    int hasil = hitung_pangkat (a, b);
	cout << endl;
    cout << a << " Dipangkatkan " << b << " = " << hasil;

    return 0;
}
