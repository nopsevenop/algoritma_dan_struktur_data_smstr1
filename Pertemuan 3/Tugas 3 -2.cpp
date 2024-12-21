#include <iostream>
using namespace std;

int main ()
{
// 	inisialisasi variabel
	int x = 50; 		// 	merupakan deklarasi tipe data integer untuk variabel x yang memiliki nilai 50
	int a, b, c, d, e;	// 	merupakan deklarasi tipe data integer untuk variabel a, b, c, d, dan e
	
// 	proses
	a = x > 5 + 5;		// 	untuk menampilkan nilai a yang menentukan variabel x lebih besar dari 10 atau tidak (50 > 10 -> true)
	b = x > 100;		// 	untuk menampilkan nilai b yang menentukan variabel x lebih besar dari 100 atau tidak (50 > 100 -> false)
	c = a && b;			// 	untuk menampilkan nilai c yang menggunakan operator Logika AND, c akan bernilai 1 (true) jika a dan b sama-sama benar, maka c = 0 (false)
	d = a || b;			// 	untuk menampilkan nilai d yang menggunakan operator Logika OR, d akan bernilai 1 jika salah satu dari a atau b benar, maka d = 1 (true)
	e = ! (c);			// 	untuk menampilkan nilai e yang menggunakan operator Logika Negasi, e akan bernilai 1 jika c salah, maka e = 1 (true)
	
// 	output berupa 1 (benar) dan 0 (salah)
	cout <<"\nNilai a = x > 5 + 5 = " << a << endl;		// 	merupakan perintah untuk menampilkan hasil nilai a pada output adalah 1 (true)
	cout <<"\nNilai b = x > 100 = " << b << endl;		// 	merupakan perintah untuk menampilkan hasil nilai b pada output adalah 0 (false)
	cout <<"\nNilai c = a && b = " << c << endl;		// 	merupakan perintah untuk menampilkan hasil nilai c pada output adalah 0 (false)
	cout <<"\nNilai d = a || b = " << d << endl;		// 	merupakan perintah untuk menampilkan hasil nilai d pada output adalah 1 (true)
	cout <<"\nNilai e = ! (c) = " << e << endl;			// 	merupakan perintah untuk menampilkan hasil nilai e pada output adalah 1 (true)
	
	getchar();	//	 merupakan fungsi untuk menghentikan eksekusi pemrograman hingga tombol Enter ditekan dari keyboard
}
