#include <iostream>
using namespace std;

void input(int input1,int input2){
    cout << "masukan bilangan ke 1 : ";
    cin >> input1;
    cout << "masukan bilangan ke 2 : ";
    cin >> input2;

    if(input1 > input2){
        cout << "\nNilai Maximal adalah bilangan " << input1 << " dan minimal adalah " << input2;
    }else if(input1 < input2){
        cout << "\nNilai Maximal adalah bilangan " << input2 << " dan minimal adalah " << input1;
    }else{
        return;
    }
}

int main(){
    int nilai1,nilai2;

    cout << "===||Nilai Max & Min dari dua bilangan||===" << endl << endl;
    input(nilai1,nilai2);
}