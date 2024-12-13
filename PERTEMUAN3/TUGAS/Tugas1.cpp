#include <iostream>
using namespace std;

main()
{
	const float phi = 3.14286;
	
	float jari_jari1, jari_jari2, luas_lingkaran, tinggi, volume_tabung;
	
	cout << "masukkan jari_jari luas lingkaran= "; cin >> jari_jari1;
	
	luas_lingkaran = phi*jari_jari1*jari_jari1;
	
	cout << "phi = " << phi << endl;
	cout << "Jari_jari= " << jari_jari1  << endl;
	cout << "jadi = " << phi << "*" << jari_jari1 << "*" << jari_jari1 << endl; 
	cout << "luas lingkaran jari-jari cm adalah = " << luas_lingkaran << endl;
	cout << "================================================================== " << endl;
	
	cout << "masukkan jari_jari volume tabung = "; cin >> jari_jari2;
	cout << "masukkan tinggi tabung = "; cin >> tinggi;
	
	volume_tabung = phi*jari_jari2*jari_jari2*tinggi;
	
	cout << "phi = " << phi << endl;
	cout << "Jari_jari = " << jari_jari2  << endl;
	cout << "tinggi = " << tinggi << endl;
	cout << "jadi = " << phi << "*" << jari_jari2 << "*" << jari_jari2 << "*" << tinggi << endl; 
	cout << "volume tabung jari-jari cm adalah = " << volume_tabung << endl;
	cout << "___________________________________________________________________" << endl;
	getchar();
}
