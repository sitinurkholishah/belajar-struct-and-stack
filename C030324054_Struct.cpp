#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

void inputdata(mahasiswa *prodi_TI){
    cout << "masukkan nama : ";
    cin >> prodi_TI->nama;
    cout << "masukkan nim : ";
    cin >> prodi_TI->nim;
    cout << "masukkan alamat : ";
    cin >> prodi_TI->alamat;
    cout << "masukkan ipk : ";
    cin >> prodi_TI->ipk;
}

int main() {
    mahasiswa Siti_Nurkholishah;

    Siti_Nurkholishah.nim = "c030324054";
    Siti_Nurkholishah.nama = "Siti Nurkholishah";
    Siti_Nurkholishah.alamat = "Jl. Sungai Andai Komp. kesehatan Blok.H No.13";
    Siti_Nurkholishah.ipk = 3.48;

    cout <<"Nama: " << Siti_Nurkholishah.nama << "\n";
    cout <<"Nim: " << Siti_Nurkholishah.nim << "\n";
    cout <<"Alamat: "<< Siti_Nurkholishah.alamat << "\n";
    cout <<"ipk: "<<Siti_Nurkholishah.ipk << "\n";

    return 0;
}