#include <iostream>
using namespace std;

int main()
{
	double total_beli, potongan = 0, jum_bayar = 0;
	cout << " total pembelian Rp. ";
	cin >> total_beli;
	if(total_beli >= 50000)
	{
		potongan = 0.2*total_beli ;
		cout << " besar potongan Rp. " << jum_bayar;
	}
	jum_bayar = total_beli-potongan ;
	cout << "jumlah yang harus dibayarkan Rp. " << jum_bayar;
	getchar();
}
