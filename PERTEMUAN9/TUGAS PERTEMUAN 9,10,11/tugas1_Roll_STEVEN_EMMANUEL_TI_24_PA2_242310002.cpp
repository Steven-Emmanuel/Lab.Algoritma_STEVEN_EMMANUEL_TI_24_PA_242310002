#include <iostream>
#include <string>
using namespace std;

struct Name {
    string name;
};

struct Roll {
    string status;
};

struct Student {
    struct Name info;
    struct Roll roll;
} data;

int main() {
    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, data.info.name);
    cout << "Masukkan Status Mahasiswa: ";
    getline(cin, data.roll.status);
    
    cout << "\n\n---Data Store Completed---\n\n";
    cout << "Name: " << data.info.name << "\nStatus: " << data.roll.status;

    return 0;
}
