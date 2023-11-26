#include <iostream>
using namespace std;

void input_umur(int jumlah_max){
    int sum_final;
    int sum[jumlah_max];
    for (int i = 0; i < jumlah_max ; i++){
        cout << "Masukan Umur Penduduk ke " << (i+1) << "\t: ";
        cin >> sum[i];
        sum_final += sum[i];
    }
    cout << endl;
    cout << "Rata Rata Umur Penduduk Adalah : " << (sum_final /= jumlah_max);
}
    
int main(){
    int max;
    int jumlah_penduduk[max];

    cout << "===||RATA RATA UMUR PENDUDUK||===" << endl << endl;
    cout << "Masukan Jumlah Penduduk\t: ";
    cin >> jumlah_penduduk[max];

    input_umur(jumlah_penduduk[max]);
}