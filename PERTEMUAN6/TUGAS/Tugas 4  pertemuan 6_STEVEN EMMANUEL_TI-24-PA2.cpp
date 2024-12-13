#include <iostream>
using namespace std;

int main(){
	int jumlah = 0;
	cout<<"hitung 10 deret bilangan genap"<<endl;
	cout<<"hasilnya= "<<endl;
	for (int i = 1; i <= 20; i += 2){
		cout<<i;
		jumlah += i;
		if(i < 19){
			cout<<" + ";
		}
		cout<<" = "<<jumlah<<endl;
	}
	return 0;
}
