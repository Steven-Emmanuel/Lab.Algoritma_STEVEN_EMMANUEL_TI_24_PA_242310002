#include <iostream>
#include <string>
using namespace std;

struct mhs {
    string nama;
    string nim;
    string matkul;
    int sks;
};

mhs bayar[2];

int main() {
    int bts, var, tetap;

    for (int i = 0; i < 2; i++) {
        // Input data
        cout << "\n\n---------------------------\n";
        cout << "\nNama mhs = ";
        getline(cin, bayar[i].nama); // Menggunakan getline untuk input string
        cout << "NIM = ";
        getline(cin, bayar[i].nim); // Menggunakan getline untuk input string
        cout << "Mata Kuliah = ";
        getline(cin, bayar[i].matkul); // Input mata kuliah

        input:
        cout << "Jumlah sks = ";
        cin >> bayar[i].sks;

        if (bayar[i].sks < 0 || bayar[i].sks > 6) { 
            cout << "Program tidak sesuai, silakan masukkan jumlah SKS yang valid, masksimum sks 6\n";
            goto input;
        }

        if (bayar[i].sks == 0) {
            tetap = 250000;
            var = bayar[i].sks * 250000;
        } else if (bayar[i].sks == 2) {
            tetap = 300000;
            var = bayar[i].sks * 300000; // Perbaikan di sini
        } else {
            tetap = 300000; // Misalkan tetap sama untuk SKS lainnya
            var = bayar[i].sks * 300000; // Misalkan variabel juga sama
        }

        cout << endl;

        // Output data
        cout << "\n\n-------------------------------\n";
        cout << "Output";
        cout << "\n-------------------------\n";
        cout << "\nNama mhs = " << bayar[i].nama;
        cout << "\nNIM = " << bayar[i].nim;
        cout << "\nMata-Kuliah = " << bayar[i].matkul;
        cout << "\nJumlah sks = " << bayar[i].sks;
        cout << "\nSPP Tetap = " << tetap;
        cout << "\nSPP Variabel = " << var;
        cout << endl << endl;
        
        cin.ignore(); // Mengabaikan newline yang tersisa di buffer
    }

    return 0;
}
