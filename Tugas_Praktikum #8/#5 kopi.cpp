#include <iostream>
using namespace std;

void kopi(int step){
    int gula;
    
    cout << "1. Siapkan kopi sachet, air panas, gula, sendok, dan gelas. " << endl;
    cout << "2. Masukan kopi sachet ke gelas"<< endl;
    cout << "3. Masukan gula ke gelas berapa sendok ? ";
    cin >> gula;
    if(gula < 1){
        cout << "Kopi Tidak Manis"<<endl;
    }else if(gula > 3){
        cout << "gula terlalu manis"<<endl;
    }else{
        return;
    }
    cout << "3. Masukan air panas secukupnya"<<endl;
    cout << "4. Aduk gelas yang sudah terisi menggunakan sendok"<<endl;
    cout << "5. kopi siap disajikan"; 
}

int main(){
    int step = 6;
    
    cout << "=====||Prosedur membuat kopi sachet||====="<<endl<<endl;
    
	kopi(step);
}
