#include <iostream>
using namespace std;

int main()
{
	int j;
	
	cout << "masukkan angka integer: ";
	cin >> j;
	
	j%=5;
	
	cout << "hasil % 5 : " << j;
	
	return 0;
}
