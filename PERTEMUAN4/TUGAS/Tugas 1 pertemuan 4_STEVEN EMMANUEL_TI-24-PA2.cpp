#include <iostream>
using namespace std;

int main()
{
	int nilai_a, nilai_b, nilai_c;
	string nama_siswa;
	cout<<"hitung nilai rata-rata"<< endl;
	cout<<"nama siswa =";
	getline(cin,nama_siswa);
	cout<<"nilai pertandingan a =";
	cin>>nilai_a;
	cout<<"nilai pertandingan b =";
	cin>>nilai_b;
	cout<<"nilai pertandingan c =";
	cin>>nilai_c;
	
	double total = (nilai_a + nilai_b + nilai_c)/3;
	cout<<"siswa yang bernama"<< nama_siswa <<endl;
	cout<<" memperoleh nilai rata-rata "<< total <<" dari hasil perlombaan diikutinya"<<endl;
	
	if (total>=85)
	{
		cout<<"maka mendapat komputer core i5";
	}
	else if (total>=70)
	{
		cout<<"maka mendapat hadiah uang sebesar Rp2.5000,000";
	}
	else
	{
		cout<<"makan mendapat hadiah hiburan";
	}
}
