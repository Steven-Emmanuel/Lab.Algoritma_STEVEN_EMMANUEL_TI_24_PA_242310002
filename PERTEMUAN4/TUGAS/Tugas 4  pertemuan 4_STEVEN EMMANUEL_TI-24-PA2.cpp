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
	cout<<" memperoleh nilai rata-rata "<< total <<" dari hasil perlombaan di-ikutinya"<<endl;
	
	int ngopi = total;
	
		switch(ngopi)
	{
		case 85 ... 100:
			cout << "maka mendapat komputer core i5";
		case 70 ... 84:
			cout << "maka mendapat hadiah uang sebesar Rp2.5000,000";
		default:
		cout << "makan mendapat hadiah hiburan";
		break;
	}
	getchar();
}
