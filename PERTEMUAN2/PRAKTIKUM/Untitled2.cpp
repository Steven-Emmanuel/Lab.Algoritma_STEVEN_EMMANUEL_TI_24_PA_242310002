#include <iostream>s
using namespace std;

int main()
{
	string x, y, z;
	
	cout << "Masukkan NPM Anda : ";
	cin >> x;
	cin.ignore();
	cout << "Masukkan Nama Anda : ";
	getline(cin, y);
	cout << "Masukkan Alamat Anda : ";
	getline(cin, z);
	
	cout << endl;
	cout << "NPM : "<< x <<endl;
	cout << "Nama : "<< y <<endl;
	cout << "Alamat : "<< z;
	
	return 0;
}
