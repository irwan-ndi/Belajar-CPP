#include <iostream>

using namespace std;
 
int main()
{
/*
	// membuat array 1
	int nilai[5];

	cout << nilai << endl;
*/

/*
	// membuat array 2
	int nilai[5];

	cout << nilai[0] << endl;
	cout << nilai[1] << endl;
	cout << nilai[2] << endl;
	cout << nilai[3] << endl;
	cout << nilai[4] << endl;
*/

/*
	// membuat array 3
	int nilai[5];

	cout << &nilai[0] << endl;
	cout << &nilai[1] << endl;
	cout << &nilai[2] << endl;
	cout << &nilai[3] << endl;
	cout << &nilai[4] << endl;

	cin.get();
	return 0;
}
*/

/*
	// membuat array 4
	int nilai[5];
	nilai[0] = 0;
	nilai[1] = 1;
	nilai[2] = 2;
	nilai[3] = 3;
	nilai[4] = 4;

	cout << &nilai[0] << " nilainya adalah: "<< nilai[0] << endl;
	cout << &nilai[1] << " nilainya adalah: "<< nilai[1] << endl;
	cout << &nilai[2] << " nilainya adalah: "<< nilai[2] << endl;
	cout << &nilai[3] << " nilainya adalah: "<< nilai[3] << endl;
	cout << &nilai[4] << " nilainya adalah: "<< nilai[4] << endl;
*/

/*
// membuat array 5 (variasi dari 4)
	int nilai[5] = { 0,1,2,3,4 };

	cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
	cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
	cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
	cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
	cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl;
*/

/*
// membuat array 6 (sebagai pembuktian saja)
	int nilai[5];
	nilai[0] = 0;
	nilai[1] = 1;
	nilai[2] = 2;
	nilai[3] = 3;
	nilai[4] = 4;

	cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
	cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
	cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
	cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
	cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl;

	int *ptr = nilai;
	*(ptr + 2) = 6;

	cout << endl;  // <--- trik juga untuk memberi jarak pada baris
	cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
	cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
	cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
	cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
	cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl;
*/

/*
// membuat array 7 (lanjutannya 6)
	int nilai[5];
	nilai[0] = 0;
	nilai[1] = 1;
	nilai[2] = 2;
	nilai[3] = 3;
	nilai[4] = 4;

	cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
	cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
	cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
	cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
	cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl;

	int* ptr = nilai;
	*(ptr + 2) = 6;

	nilai[3] = 7;

	cout << endl;  // <--- trik juga untuk memberi jarak pada baris
	cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
	cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
	cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
	cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
	cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl;
*/

/*
// membuat array 8
	int nilai[5];
	nilai[0] = 0;
	nilai[1] = 1;
	nilai[2] = 2;
	nilai[3] = 3;
	nilai[4] = 4;

	cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
	cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
	cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
	cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
	cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl;

	int* ptr = nilai;
	*(ptr + 2) = 6;

	nilai[3] = 7;

	cout << endl;  // <--- trik juga untuk memberi jarak pada baris
	cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
	cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
	cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
	cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
	cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl;
	
	cout << endl;
	cout << "ukuran array = " << sizeof(nilai) << " byte" << endl;
*/

///*
	// membuat array 9
	int nilai[5]; // coba ganti [6]
	nilai[0] = 0; // kalo udah paham coba di random angka yg belakang
	nilai[1] = 1;
	nilai[2] = 2;
	nilai[3] = 3;
	nilai[4] = 4;

	cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
	cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
	cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
	cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
	cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl;

	int* ptr = nilai;
	*(ptr + 2) = 6;

	nilai[3] = 7;

	cout << endl;  // <--- trik juga untuk memberi jarak pada baris
	cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
	cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
	cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
	cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
	cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl;

	cout << endl;
	cout << "ukuran array = " << sizeof(nilai) << " byte" << endl;
	cout << "jumlah member array = " << sizeof(nilai) / sizeof(int) << endl;
//*/


	cin.get();
	return 0;
}
