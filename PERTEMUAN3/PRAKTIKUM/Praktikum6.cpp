#include <iostream>
using namespace std;

int main()
{
	const float phi = 3.14286;
	
	float jari_jari, tinggi, volume, luas;
	
	cout << "masukkan jari_jari lingkaran: "; cin >> jari_jari;
	cout << "masukkan tinggi: "; cin >> tinggi;
	
	volume = phi*jari_jari*jari_jari*tinggi;
	luas = 2*phi*jari_jari*tinggi;
	
	cout << "volume tabung: " << volume << endl;
	cout << "luas tabung: " << luas << endl;
	
	return 0;
}
