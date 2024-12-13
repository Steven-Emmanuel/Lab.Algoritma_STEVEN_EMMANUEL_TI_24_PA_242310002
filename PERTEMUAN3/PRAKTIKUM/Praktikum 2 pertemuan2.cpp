#include <iostream>
using namespace std;

int main()
{
	int x, y,  tambah, kurang, kali, bagi;
	
	cout << "masukkan angka kesatu: ";
	cin  >> x;
	cout <<  "'masukkan angka kedua: ";
	cin >> y;
	
	tambah = x + y;
	kurang = x - y;
	kali = x * y;
	bagi = x / y;
	
	cout << "hasil penjumlahan: " << tambah << endl;
	cout << "hasil penguranan: " << kurang << endl;
	cout << "hasil perkalian: " << kali << endl;
	cout << "hasil pembagian: " << bagi << endl;
	
	return 0;
}
