#include <iostream>
using namespace std;

int main(){
	int jumlah = 0;
	cout<<"hitung 10 deret bilangan genap"<<endl;
	cout<<"hasilnya= "<<endl;
	for (int i = 1; i <= 10; i++){
		int genap = i*2;
		cout<<genap;
		jumlah += genap;
		if(i < 10){
			cout<<" + ";
		}
		cout<<" = "<<jumlah<<endl;
	}
	return 0;
}
