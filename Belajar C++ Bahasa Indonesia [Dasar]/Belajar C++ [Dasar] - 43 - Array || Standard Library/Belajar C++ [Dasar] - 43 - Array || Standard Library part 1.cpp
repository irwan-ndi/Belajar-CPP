#include <iostream>
#include <array>

int main()
{

	// membuat array dengan menggunakan standard library
	// array < int, jumlah array > nama array

	std::array < int, 5 > nilai;

	for (int i = 0; i <= 4; i++) {
		nilai[i] = i;
		std::cout << " nilai [" << i << "] = " << nilai[i];
		std::cout << " address : " << &nilai[i] << std::endl;
	}
	std::cin.get();
	return 0;
}
