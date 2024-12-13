#include <iostream>
using namespace std;

int main()
{
	char kode;
	cout << "masukkan kode barang [A..C] = ";
	cin >> kode;
	
	switch(kode) 
	{
		case 'A':
		cout << " Alat olahraga ";
		case 'B':
		cout << "Alat elekronik ";
		case 'C':
		cout << " Alat masak ";
		break;
		default:
		cout << "Anda Salah Masukkan Kode ";
		break;
	} 
	getchar();
}
