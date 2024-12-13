#include <iostream>
using namespace std;

int main(){
	int a = 0, b = 1, c, d;
	cout << "masukkan : "; cin >> d;
	cout << a << " " << b << " ";
		for (int i = 2; i < d; i++){
			c = a + b;
			cout << c << " ";
			a = b;
			b = c;
		}
		return 0;
}
