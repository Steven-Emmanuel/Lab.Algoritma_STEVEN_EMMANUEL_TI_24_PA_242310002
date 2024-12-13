#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main(){
	char a1[] = "IBIK";
	char a2[] = "IbiK";
	char b2[] = "IbIk";
	
	cout<<"hasil pertandingan  "<<a1<<" dan "<<a2<<"->";
	cout<<strcmp(a1, a2)<<endl;
	cout<<"hasil pertandingan "<<a2<<" dan "<<a2<<"->";
	cout<<strcmp(a1, a2) <<endl;
	cout<<"hasil pertandingan"<<a1<<" dan "<<b2<<"->";
	cout<<strcmp(a1, a2)<<endl; 

	getchar();
}
