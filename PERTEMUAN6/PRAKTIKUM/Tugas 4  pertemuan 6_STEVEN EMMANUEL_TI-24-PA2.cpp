#include <iostream>
using namespace std;

int main(){
	int x, bil = 0;
	cout<<"masukkan bilangan pembatas ahkir: ";
	cin>>x;
	
	do{
		if(bil >= x)
		break;
		cout<<bil<<" ";
	}
	while(bil<=2);
	getchar();
}
