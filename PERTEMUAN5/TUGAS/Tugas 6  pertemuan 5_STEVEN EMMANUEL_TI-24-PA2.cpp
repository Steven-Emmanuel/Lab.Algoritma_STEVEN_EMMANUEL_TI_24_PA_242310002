#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan tinggi belah ketupat (bilangan ganjil): ";
    cin >> n;

    int mid = n / 2;

    for (int i = 0; i <= mid; i++) {
        for (int j = 0; j < mid - i; j++) {
            cout << " ";
        }
        for (int j = 0; j <= 2 * i; j++) {
            if (j == 0 || j == 2 * i) {
                cout << "*"; //bintang di tepi
            } else {
                cout << " "; //bagian dalam kosong
            }
        }
        cout << endl;
    }

    for (int i = mid - 1; i >= 0; i--) {
        for (int j = 0; j < mid - i; j++) {
            cout << " ";
        }
        for (int j = 0; j <= 2 * i; j++) {
            if (j == 0 || j == 2 * i) {
                cout << "*"; //bintang di tepi
            } else {
                cout << " "; //bagian dalam kosong
            }
        }
        cout << endl;
    }

    return 0;
}
