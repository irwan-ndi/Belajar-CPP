#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int, 10> nilai;

	cout << "Program menampilkan grafik nilai " << endl << endl;

	for (int i = 0; i <= nilai.size(); i++) {
		cout << "jumlah mahasiswa dengan nilai ";
		if (i == 0) {
			cout << "0-9: ";
		}
		else if (i == 10) {  //yg membuat limit inputan
			cout << "100: ";
		}
		else{
			cout << i * 10 << "-" << (i * 10) + 9 << ": ";
		}	
		cin >> nilai[i];
	}

	for (int i = 0; i <= nilai.size(); i++) {
		cout << nilai[i] << endl;
	}
	cin.get();
	return 0;
}
