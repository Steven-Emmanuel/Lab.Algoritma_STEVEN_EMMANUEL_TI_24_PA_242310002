#include <iostream>
using namespace std;

void swap();

int main() {
	int a = 20;
	int b = 50;
	
	cout << "sebelum menukar nilai a: " << a << endl;
	cout << "sebelum menukar nilai b: " << b << endl;
	
	swap(a, b);
	cout << "-----------------------------------" << endl;
	
	cout << "setelah menukar nilai a: " << a << endl;
	cout << "setelah menukar nilai b: " << b << endl;
	
	return 0;
}
