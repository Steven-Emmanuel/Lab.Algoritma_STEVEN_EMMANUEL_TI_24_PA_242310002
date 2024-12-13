#include <iostream>
using namespace std;

int main(){
	int number = 0;
	int sum = 0;
	
	do{
		sum += number;
		cout<<"masukkan angka: ";
		cin>>number;
	}
	while (number >= 1);
	cout<<"\nHasil penjumlahan adalah: "<<sum;
	return 0;
}
