#include <iostream>
#define phi 3.14
using namespace std;

int main()
{
	float r, t, luas, volume;
	cout << "Masukkan jari - jari lingkaran dan tabung = ";
	cin >> r;
	cout << "Masukkan tinggi tabung = ";
	cin >> t;
	
	luas = phi * r * r;
	volume = phi * r * r * t;
	
	cout << "\nMenghitung Luas Lingkaran" << endl;
	cout << "=========================" << endl;
	cout << "Diketahui luas lingkaran :" << endl;
	cout << "Jari-jari\t= " << r << endl;
	cout << "phi \t \t= " << phi << endl;
	cout << "L \t \t= phi x r x r " << endl;
	cout << "L \t \t= " << phi << " x " << r << " x " << r << endl;
	cout << "L \t \t= " << luas << " cm" << endl;
	cout << "Luas lingkaran dengan jari-jari " << r << " adalah = " << luas << " cm" << endl;
	
	cout << "\nMenghitung Volume Tabung" << endl;
	cout << "========================" << endl;
	cout << "Diketahui volume lingkaran :" << endl;
	cout << "Jari-jari\t= " << r << endl;
	cout << "Tinggi \t \t= " << t << endl;
	cout << "phi \t \t= " << phi << endl;
	cout << "V \t \t= phi x r x r x t " << endl;
	cout << "V \t \t= " << phi << " x " << r << " x " << r << " x " << t << endl;
	cout << "V \t \t= " << volume << " cm" << endl;
	cout << "Volume tabung dengan jari-jari " << r << " dan tinggi " << t << " adalah = " << volume << " cm" <<endl;
	
	return 0;
}
