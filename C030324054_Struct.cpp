#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main() {
    mahasiswa Siti_Nurkholishah;

    Siti_Nurkholishah.nim = "c030324054";
    Siti_Nurkholishah.nama = "Siti Nurkholishah";
    Siti_Nurkholishah.alamat = "Jl. Sungai Andai Komp. kesehatan Blok.H No.13";
    Siti_Nurkholishah.ipk = 3.48;

    cout << Siti_Nurkholishah.nim << "\n";
    cout << Siti_Nurkholishah.nama << "\n";
    cout << Siti_Nurkholishah.alamat << "\n";
    cout << Siti_Nurkholishah.ipk << "\n";

    return 0;
}