// AUDIYA_24104410052_FUNCTION.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define DC 3.14
using namespace std;

// Luas & Keliling Persegi
void Persegi(double Sisi) {
    cout << "Luas Persegi : " << (Sisi * Sisi) << endl;
    cout << "Keliling Persegi : " << (4 * Sisi) << endl;
}

// Luas & Keliling Persegi Panjang
void PersegiPanjang(double Panjang, double Lebar) {
    cout << "Luas Persegi Panjang : " << (Panjang * Lebar) << endl;
    cout << "Keliling Persegi Panjang : " << (2 * (Panjang + Lebar)) << endl;
}

// Luas & Keliling Lingkaran
void Lingkaran(double JariJari) {
    cout << "Luas Lingkaran : " << (DC * JariJari * JariJari) << endl;
    cout << "Keliling Lingkaran : " << (2 * DC * JariJari) << endl;
}

// Luas & Keliling Segitiga
void Segitiga(double Alas, double Tinggi) {
    cout << "Luas Segitiga : " << (0.5 * Alas * Tinggi) << endl;
    cout << "Keliling Segitiga : " << (Alas + Tinggi + (Alas + Alas + Tinggi + Tinggi) / (Alas + Tinggi)) << endl;
}

int main() {
    int Pilih;
    do {
        cout << "TUGAS FUNCTION LUAS & KELILING\n";
        cout << "AUDIYA PUTRI RAMADHANI\n";
        cout << "NIM : 24104410052\n";
        cout << "\nPilihlah Bangun Datar Yang Akan Di Hitung (Angka)" << endl;
        cout << "1. Persegi" << endl;
        cout << "2. Persegi Panjang" << endl;
        cout << "3. Lingkaran" << endl;
        cout << "4. Segitiga" << endl;
        cout << "5. Keluar Metode" << endl;
        cout << "Masukan Pilihan (1-5) : ";
        cin >> Pilih;

        switch (Pilih) {
        case 1: {
            double sisi;
            cout << "Masukan Sisi : ";
            cin >> sisi;
            Persegi(sisi);
            break;
        }
        case 2: {
            double Panjang, Lebar;
            cout << "Masukan Panjang : ";
            cin >> Panjang;
            cout << "Masukan Lebar : ";
            cin >> Lebar;
            PersegiPanjang(Panjang, Lebar);
            break;
        }
        case 3: {
            double JariJari;
            cout << "Masukan Jari Jari :";
            cin >> JariJari;
            Lingkaran(JariJari);
            break;
        }
        case 4: {
            double Alas, Tinggi;
            cout << "Masukan Alas : ";
            cin >> Alas;
            cout << "Masukan Tinggi :";
            cin >> Tinggi;
            break;
        }
        case 5:
            cout << "Keluar Dari Program." << endl;
            break;
        default:
            cout << "Pilihan Tidak Valid! Mohon Coba Lagi" << endl;
        }
    } while (Pilih != 5);

        return 0;
}