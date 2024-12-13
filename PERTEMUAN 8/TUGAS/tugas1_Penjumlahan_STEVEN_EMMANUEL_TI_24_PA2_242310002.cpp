#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

struct barang {
    char kode; // Ubah tipe dari int ke char untuk kode angka simbol bisa dipake
    string nama;
    int harga;
    int jumlah;
};

int main() {
    // Daftar harga ayam
    vector<barang> jenis_barang = {
        {'D', "Dada", 2500, 0},
        {'P', "Paha", 2000, 0},
        {'S', "Sayap", 1500, 0}
    };

    int banyakJenis;
    cout << "Banyak Jenis Potongan Tidak Lebih Dari 3 Potongan: ";
    cin >> banyakJenis;
    // Input data jenis potongan 
     {
    	if (banyakJenis > 3){
    		cout << "Try Again, Data only 3 item yet!!!"; return 0;
		}
	}
    for (int i = 0; i < banyakJenis; i++) {    	
        char kode; // Ngubah tipe dari string ke char untuk kode angka supaya bisa mengguanakn simbol angka
        int banyakBeli;

        cout << "\nJenis Ke-" << i + 1  << ":\n";
        cout << "Jenis Potong [D/P/S]: ";
        cin >> kode;

        cout << "Banyak Beli: ";
        cin >> banyakBeli;

        // cari barang sesuai kode
        bool found = false;
        for (int j = 0; j < jenis_barang.size(); j++) {
            if (jenis_barang[j].kode == kode) { // Perbandingan dengan char
                jenis_barang[j].jumlah += banyakBeli;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Kode jenis tidak valid.\n";
        }
    }

//     nampil data si pembeli
    cout << "\nData Pembelian Fried Chicken:\n";
    cout << "\tNama\tHarga\tJumlah\tTotalHarga\n";
    int totalKeseluruhan = 0;
    for (int i = 0; i < jenis_barang.size(); i++) {
    	int total = jenis_barang[i].harga * jenis_barang[i].jumlah;
    	totalKeseluruhan += total;
        cout << jenis_barang[i].kode << "\t"
             << jenis_barang[i].nama << "\t"
             << jenis_barang[i].harga << "\t"
             << jenis_barang[i].jumlah << "\t"
             << total << "\n";
	}
	cout << "____________________________________________\n";
    cout << "Total Biaya Keseluruhan Penjumlahan:\t" << totalKeseluruhan << "\n";
    return 0;
    
}
