#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main(){
    int temp = 0, sum = 0;
    string data[4][3];
    cout << "INPUT DATA NILAI : \n";

    for(int i = 0; i < 2; i++){
        cout << "NPM : ";
        cin >> data[i][0];
        cout << "NAMA : ";
        cin >> data[i][1];
        cout << "NILAI : ";
        cin >> data[i][2];
    }
    cout << "\nDAFTAR NILAI MAHASISWA\n";
    cout << setw(5) << left << "NPM"
         << setw(20) << left << "NAMA"
         << setw(5) << left << "NILAI\n";
    
    for (int i = 0; i < 2; i++){
        cout << setw(5) << left << data[i][0]
             << setw(20) << left << data[i][1]
             << setw(5) << left << data[i][2];
        cout << endl;

        stringstream ss;
        ss << data[i][2];
        ss >> temp;
        sum += temp;
    }

    sum /= 2 ;
    cout << "Rata rata : " << sum;
}