#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout << "~ Program C++ Segitiga Bintang ~" << endl;
	cout << "================================" << endl;
	cout << "input segitiga bintang: ";
	cin >> a;
	for ( a = 1; a <= 3; a++){
		for ( b = 1; b <= a; b++){
			cout <<" *";
		}
		cout << endl;
	}
	return 0;
}
