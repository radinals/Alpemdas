#include <iostream>
using namespace std;

void kopi(int prosedur){
    
    cout << (prosedur-4) << ". siapkan gelas,kopi,air panas dan sendok"<<endl;
    cout << (prosedur-3) << ". buka kopi dan tuangkan ke dalam gelas"<<endl;
    cout << (prosedur-2) << ". tuangkan air panas ke gelas berisi bubuk kopi"<<endl;
    cout << (prosedur-1) << ". lalu aduk menggunakan sendok"<<endl;
    cout << (prosedur) << ". kopi siap diminum" << endl;
    
}

int main(){
    int step_by_step = 5;
    cout << "=====||Prosedur membuat kopi||====="<<endl<<endl;
    cout << "ada 5 cara membuat kopi"<<endl<<endl;
    kopi(step_by_step);
}