#include <iostream>
using namespace std;

int main() {
  int bilangan;
  cout << "Masukkan bilangan: ";
  cin >> bilangan;

  int sisa = bilangan % 2;

  // Cetak "genap" jika sisa = 0, "ganjil" jika sisa != 0
  if (sisa == 0) {
    cout << "Genap" << endl;
  } else {
    cout << "Ganjil" << endl;
  }

  return 0;
}
