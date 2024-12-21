#include <iostream>
using namespace std;

int main ()
{
	char bandMetal [] = "SEPULTURA";
	char *bandPunk = "RANCID";
	
	cout << "Nama Band Metal : " << bandMetal << endl;
	cout << "Nama Band Punk : " << bandPunk;
	
	bandPunk += 3; //menambah nilai penunjuk / pointer
	cout << "\nNama Band Metal : " << bandMetal << endl;
	cout << "Nama Band Punk : " << bandPunk;
	
	getchar ();
}
