#include <iostream>
using namespace std;

int main(){
	char ulang;
	awal:
	
	cout<<"program perulangan menggunakan go to"<<endl;
	cout<<endl;
	cout<<"ingin mengulang perintah (y/t)?";
	cin>>ulang;
	cout<<endl;
	
	if(ulang == 'y' || ulang == 't'){
		goto awal;
	}
	if(ulang == 'y' || ulang == 't'){
		goto ahkir;
	}
	
	ahkir:
	cout<<"program selesai.";
	return 0;		
}
