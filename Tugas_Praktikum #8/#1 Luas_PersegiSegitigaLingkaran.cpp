#include <iostream>
using namespace std;



void luasPersegi() {
    int s, luas;
    cout << "Masukkan panjang sisi: ";
    cin >> s;
    luas = s * s;
    cout << "Luas persegi adalah " << luas << endl;
}

void luasSegitiga() {
    int a, t;
    float luas;
    cout << "Masukkan panjang alas: ";
    cin >> a;
    cout << "Masukkan tinggi segitiga: ";
    cin >> t;
    luas = 0.5 * a * t;
    cout << "Luas segitiga adalah " << luas << endl;
}

void luasLingkaran() {
    float r, luas, phi = 3.14;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;
    luas = phi * r * r;
    cout << "Luas lingkaran adalah " << luas << endl;
}

void opsi(int pilih){
    switch (pilih) {
        case 1:
            luasPersegi();
            break;
        case 2:
            luasSegitiga();
            break;
        case 3:
            luasLingkaran();
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
    }
}

int main() {
    int pilihan;
    cout << "Pilih bangun datar yang ingin dihitung luasnya:" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Segitiga" << endl;
    cout << "3. Lingkaran" << endl;
    cout << "masukan Pilihan (1-3) : ";
    cin >> pilihan;

    opsi(pilihan);

    return 0;
}
