#include <iostream>
#include <array>
using namespace std;


int main()
{

	// membuat array dengan menggunakan standard library
	// array < int, jumlah array > nama array

	array < int, 5 > nilai;

	for (int i = 0; i <= 4; i++) {
		nilai[i] = i;
		cout << " nilai [" << i << "] = " << nilai[i];
		cout << " address : " << &nilai[i] << endl;
	}

	// ukuran array
	cout << nilai.size() << endl;

	cin.get();
	return 0;
}
