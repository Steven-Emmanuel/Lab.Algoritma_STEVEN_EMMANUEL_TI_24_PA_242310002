#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	char huruf[20];
	char pindah[20];
	
	cout<<"masukkan sembarang kata = ";
	cin>>huruf;
	
	strcpy(pindah, huruf);
	cout<<"pemindahannya = "<<pindah;
	getchar();
}
