#include <iostream>
#include <cmath>

using namespace std;

//luas persegi
void hitungLuasPersegi() {
    double sisi;
    cout << "Masukkan panjang sisi pada persegi: ";
    cin >> sisi;
    double luas = sisi * sisi;
    cout << "ini hasil Luas Perseginya: " << luas << "\n" << endl;
}

//luas persegi panjang
void hitungLuasPersegiPanjang() {
    double panjang, lebar;
    cout << "Masukkan panjang pada persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar pada persegi panjang: ";
    cin >> lebar;
    double luas = panjang * lebar;
    cout << "ini hasil Luas Persegi Panjang: " << luas << "\n" << endl;
}

//luas tabung bawah datar
void hitungLuasTabung() {
    double jariJari, tinggi;
    cout << "Masukkan jari-jari tabung: ";
    cin >> jariJari;
    cout << "Masukkan tinggi tabung: ";
    cin >> tinggi;
    
    double luasAtasBawah = 2 * M_PI * jariJari * jariJari; // Luas dua lingkaran
    double luasSelimut = 2 * M_PI * jariJari * tinggi; // Luas selimut
    double luasTabung = luasAtasBawah + luasSelimut;
    
    cout << "ini hasil Luas Tabung: " << luasTabung << "\n" << endl;
}

//volume tabung
void hitungVolumeTabung() {
    double jariJari, tinggi;
    cout << "Masukkan jari-jari tabung: ";
    cin >> jariJari;
    cout << "Masukkan tinggi tabung: ";
    cin >> tinggi;
    
    double volume = M_PI * jariJari * jariJari * tinggi;
    cout << "ini hasil Volume Tabung: " << volume << "\n" << endl;
}

int main() {
    //hasil dan ngitung luas persegi
    hitungLuasPersegi();
    
    //hasil dan diitung luas persegi panjang
    hitungLuasPersegiPanjang();
    
    //hasil dan ngitung luas tabung
    hitungLuasTabung();
    
    //hasil dan ngitung volume tabung
    hitungVolumeTabung();

    return 0;
}
