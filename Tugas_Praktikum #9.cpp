#include <iostream>
using namespace std;

float phi = 3.14;

float formula1(float jari_jari, int tinggi){
    return 2 * phi * jari_jari * (jari_jari + tinggi);
}

float formula2(float jari_jari, float tinggi){
    return phi * jari_jari * jari_jari * tinggi;
}

int main(){
    int r, t, option;

    cout << "===||MENGHITUNG LUAS PERMUKAAN DAN VOLUME TABUNG||===" << endl << endl;
    cout << "inputkan jari-jari\t: ";
    cin >> r;
    cout << "inputkan tinggi\t\t: ";
    cin >> t;
    cout << "1. Luas Permukaan Tabung" << endl << "2. volume Tabung" << endl;
    cout << "inputkan pilihan\t: ";
    cin >> option;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    switch(option){
        case 1:{
            cout << "Rumus\t\t\t: " << "2*phi*r*(r+t)" << endl;
            cout << "luas permukaan Tabung\t\t: " << formula1(r,t);
            break;
        }
        case 2:{
            cout << "Rumus\t\t\t:" << "phi*r*r*t" << endl;
            cout << "Volume Tabung\t:" << formula2(r,t);
            break;
        }
        default:{

        }
    }

    return 0;
}
