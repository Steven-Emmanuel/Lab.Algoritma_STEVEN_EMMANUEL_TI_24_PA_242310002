#include <iostream>
using namespace std;

int main()
{
	int a, b, c = 0, d = 0;
	
	cout << "masukkan nilai a: "; cin >> a;
	cout << "masukkan nilai b: "; cin >> b;
	
	c = a % b;
	d = a * b;
	
	cout << "hasil dari c = a % b = " << c << endl;
	cout << "hasil dari d = a * b = " << d << endl;
	
	getchar();
}
