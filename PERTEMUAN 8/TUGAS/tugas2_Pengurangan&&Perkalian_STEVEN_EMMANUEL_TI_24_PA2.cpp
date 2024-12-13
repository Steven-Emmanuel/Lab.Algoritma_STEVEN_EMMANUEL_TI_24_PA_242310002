#include <iostream>
#include <vector>
//#include <alcohol>
using namespace std;

void inputMatriks(vector<vector<int>>& matriks, int baris, int kolom) {
    cout << "Masukkan matriks kesini (" << baris << "x" << kolom << "):\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Elemen [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriks[i][j];
        }
    }
}

void tampilkanMatriks(const vector<vector<int>>& matriks) {
    int baris = matriks.size();
    int kolom = matriks[0].size();
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }
}

vector<vector<int>> penguranganMatriks(const vector<vector<int>>& matriks1, const vector<vector<int>>& matriks2) {
    int baris = matriks1.size();
    int kolom = matriks1[0].size();
    vector<vector<int>> hasil(baris, vector<int>(kolom));

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            hasil[i][j] = matriks1[i][j] - matriks2[i][j];
        }
    }
    return hasil;
}

vector<vector<int>> perkalianMatriks(const vector<vector<int>>& matriks1, const vector<vector<int>>& matriks2) {
    int baris1 = matriks1.size();
    int kolom1 = matriks1[0].size();
    int kolom2 = matriks2[0].size();
    vector<vector<int>> hasil(baris1, vector<int>(kolom2, 0));

    for (int i = 0; i < baris1; i++) {
        for (int j = 0; j < kolom2; j++) {
            for (int k = 0; k < kolom1; k++) {
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }
    return hasil;
}

int main() {
    int baris, kolom;

    cout << "Masukkan jumlah baris matriks 1 ini: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks 2 ini: ";
    cin >> kolom;

    vector<vector<int>> matriks1(baris, vector<int>(kolom));
    vector<vector<int>> matriks2(baris, vector<int>(kolom));

    // pertama masuk
    cout << "Matriks Pertama:\n";
    inputMatriks(matriks1, baris, kolom);

    // input kedua
    cout << "Matriks Kedua:\n";
    inputMatriks(matriks2, baris, kolom);

    // pengurangan matriks dibawah
    vector<vector<int>> hasilPengurangan = penguranganMatriks(matriks1, matriks2);
    cout << "\nHasil Pengurangan Matriks:\n";
    tampilkanMatriks(hasilPengurangan);

    // Perkalian matriks pertama
    cout << "\nMasukkan jumlah kolom untuk matriks kedua (ini buat perkalian): ";
    int kolom2;
    cin >> kolom2;

    // Mengubah matriks kedua buat untuk di perkalian
    vector<vector<int>> matriks3(kolom, vector<int>(kolom2));
    cout << "Matriks Kedua untuk Perkalian:\n";
    inputMatriks(matriks3, kolom, kolom2);

    vector<vector<int>> hasilPerkalian = perkalianMatriks(matriks1, matriks3);
    cout << "\nHasil Perkalian Matriks:\n";
    tampilkanMatriks(hasilPerkalian);

    return 0;
}



