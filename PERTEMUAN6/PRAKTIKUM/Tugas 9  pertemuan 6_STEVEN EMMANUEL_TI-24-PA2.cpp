#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

int main(){
	
	char huruf[100];
	
	cout<<"masukkan sembarang kata = ";
	cin.getline (huruf, sizeof(huruf));
	
	int x = strlen(huruf);
	cout<<"kalimat terbalik: ";
	
	for(int i = x - 1; i >= 0; i--){
		cout<<huruf[i];
	}
	
	cout<<endl;
	return 0;
}
