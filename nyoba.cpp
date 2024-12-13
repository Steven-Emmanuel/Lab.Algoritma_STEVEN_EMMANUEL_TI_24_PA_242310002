#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cout << " default loop b = 3 " <<endl;	
	cout << " masukkan angka = "; cin>>a;
	cout << "hasil input dari a = "<<a<<endl;
	
	b = 3;

	for (int c = 1; c <= a; c++){
		for (int d = 1; d < b; d++){
			cout << c;
		}
		cout << endl;
	}
	return 0;
}
