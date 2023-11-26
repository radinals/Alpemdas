#include <iostream>
using namespace std;

void kondisi(int ucapan){
    if(ucapan < 10){
        cout << "Selamat Pagi";
    }else if(ucapan < 16){
        cout << "Selamat Siang";
    }else if(ucapan < 18){
        cout << "Selamat sore";
    }else if(ucapan > 18){
        cout << "Selamat Malam";
    }else{
        return;
    }
}

int main(){
    int input_ucapan;

    cout << "===||UCAPAN SESUAI DENGAN WAKTU||==" << endl << endl;
    cout << "Sekarang Jam Berapa ? ";
    cin >> input_ucapan;

    kondisi(input_ucapan);
}