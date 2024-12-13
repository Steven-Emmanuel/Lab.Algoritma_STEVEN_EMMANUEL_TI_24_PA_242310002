#include <iostream>
using namespace std;

//Fungsi rekursif
int pangkat(int x, int y) {
  if (y == 0) {
    return 1;
  } else {
    return x * pangkat(x, y - 1);
  }
}

int main() {
  int x, y;

  cout << "ngitung pangkat dengan rekrusif" << endl;
  cout << "nilai x = ";
  cin >> x;
  cout << "nilai y = ";
  cin >> y;

  int hasil = pangkat(x, y);
  cout << x << " Dipangkatin " << y << " = " << hasil << endl;

  return 0;
}
