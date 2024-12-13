#include <iostream>
using namespace std;

void siswa ()
{
	string nama = "Hery";
	string jk = "laki - laki";
	cout << nama << " adalah seorang " << jk << endl;
}

string siswi ()
{
	string nama = "Helena";
	string jk = "perempuan";
	return (nama + " adalah seorang " + jk);
}

int main () 
{
	siswa(); //Fungsi void tidak memerlukan 'cout'
	cout<< siswi() << endl; //Fungsi non-void mengembalikan nilai, maka butuh 'cout'
}
