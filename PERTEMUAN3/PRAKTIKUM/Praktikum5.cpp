#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	
	int b = a--;
	
	cout << "Post-Decrement: " << endl;
	cout << "NIlai a setelah a--: " << a << endl;
	cout << "Nilai b: " << b << endl;
	
	int c = 5;
	
	int d = --c;
	
	cout << "\nPre-Decrement: " << endl;
	cout << "Nilai c setelah --c: " << c << endl;
	cout << "Nilai d: " << d << endl;
	
	return 0;
}
