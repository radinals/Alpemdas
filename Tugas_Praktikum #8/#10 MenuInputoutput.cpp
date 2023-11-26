#include <iostream>
using namespace std;

void makanan(int pilih){
    cout << "1. Nasi Goreng" << endl << "2. Nasi kukus" << endl << "3.  Nasi Liwet" << endl << "Pilih Makananmu : ";
    cin >> pilih;
    switch(pilih){
        case 1:{
            cout << "Makanan yang kamu pesan adalah Nasi Goreng" << endl << endl;
            break;
        }
        case 2:{
            cout << "Makanan yang kamu pesan adalah Nasi kukus" << endl << endl;
            break;
        }
        case 3:{
            cout << "Makanan yang kamu pesan adalah Nasi Liwet" << endl << endl;
            break;
        }
    }
}

void minuman(int pilih){
    cout << "1. teh manis" << endl << "2. Kopi" << endl << "3.  susu" << endl << "pilih minumanmu : ";
    cin >> pilih;
    switch(pilih){
        case 1:{
            cout << "minuman yang kamu pesan adalah Teh manis" << endl << endl;
            break;
        }
        case 2:{
            cout << "minuman yang kamu pesan adalah kopi" << endl << endl;
            break;
        }
        case 3:{
            cout << "minuman yang kamu pesan adalah susu" << endl << endl;
            break;
        }
    }
}

int main(){
    int menu;

    cout << "===||Menu Makanan dan Minuman||===" << endl << endl;
    cout << "Pilih Makananmu" << endl;
    makanan(menu);
    cout << "pilih minumanmu" <<  endl;
    minuman(menu);
}