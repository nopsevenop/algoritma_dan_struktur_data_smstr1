#include <iostream>
using namespace std;

int main ()
{
	int hr, min, sec;
	
	for (hr = 1; hr <= 10; hr++)
	{
		min = 60 * hr;
		sec = 3600 * hr;
		
		cout << hr << " jam setara dengan " << min << " menit atau " << sec << " detik";
		cout << endl;
	}
	return 0;
}
