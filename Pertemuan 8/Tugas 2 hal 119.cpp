#include <iostream>
#include <string>
using namespace std;

int main ()
{
	int a, b, banyak, menu;
	float jumlahbayar, pajak, totalbayar;
	const int z = 3;
	int potong [z];
	int harga [z] = {2500, 2000, 1500};
	char kode [z] = {'D', 'P', 'S'} ;
	char jenis [z];
	string arti [z] = {"Dada", "Paha", "Sayap"} ;
	
	cout << "GEROBAK FRIED CHICKEN" << endl;
	cout << "---------------------";
	cout << "\nKode    Jenis    Harga" << endl;
	cout << "-------------------------" << endl;
	
	for (a = 0; a < z; a++)
	{	
		cout << " " << kode [a] << "\t" << arti [a] << "\tRp. " << harga [a] << endl;	
	}
	cout << "-------------------------";
	cout << "\n\nBanyak jenis : ";
	cin >> banyak;
	
	for (a = 0; a < banyak; a++)
	{
		cout << " \nJenis ke = " << a + 1 << endl;
		cout << "Jenis potong [D/P/S] : ";
		cin >> jenis [a];
		cout << "Banyak potong        : ";
		cin >> potong [a];
	}
			
	cout << "\n\n\n\t\t\tGEROBAK FRIED CHICKEN " << endl;
	cout << "-----------------------------------------------------------------" << endl;
	cout << "No.     Jenis           Harga           Banyak          Jumlah" << endl;
	cout << "        Potong          Satuan          Beli            Harga" << endl;
	cout << "-----------------------------------------------------------------" << endl;
	
	for (a = 0; a < banyak; a++)
	{
		for (b = 0; b < z; b++)
		{
			if (kode [b] == jenis [a])
			{
			menu = b;
			break;	
			}
		}
		cout << a + 1 << "\t" << " " << arti [menu] << "\t\tRp " << harga [menu] << "\t\t" << " " << potong [a] << "\t\tRp " << harga [menu] * potong [a] << endl;
		jumlahbayar += harga [menu] * potong [a];
	}
	pajak = jumlahbayar * 10 / 100;
	totalbayar = jumlahbayar + pajak;
	
	cout << "-----------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\tJumlah Bayar    Rp " << jumlahbayar << endl;
	cout << "\t\t\t\t\tPajak 10%       Rp " << pajak << endl;
	cout << "\t\t\t\t\tTotal Bayar     Rp " << totalbayar << endl;
	
	getchar();
}
