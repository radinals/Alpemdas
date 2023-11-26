#include <iostream>
using namespace std;

void input(int sum){
    int x, y = 0;

    cout << "masukan bilangan yang akan di cari primanya : ";
    cin >> x;

    for(int i = 1; i <= x; i++){
        if (x % i == 0){
            y++;
        }
        if(y == 2){
            cout << " Merupakan bilangan prima" << endl;
        }else{
            cout << " bukan Bilangan Prima" << endl;
        }
    }
}

int main(){
    int x;

    cout << "===||Mencari Bilangan Prima Dari Input||===" << endl << endl;
    input(x);
    
}