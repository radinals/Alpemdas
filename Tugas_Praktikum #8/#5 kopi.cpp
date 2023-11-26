#include <iostream>
using namespace std;

void kopi(int procedur, string in){
    for(int i = 0; i < procedur; i++){
    	cout << (i+1) << " ";
    	cin >> in;
	}
}

int main(){
    int step;
    string input;
    
    cout << "=====||Prosedur membuat kopi||====="<<endl<<endl;
    cout << "Ada berapa step by step membuat kopi ? ";
    cin >> step;
    cout << "nmasukan step by stepnya : "<< endl;
    
	kopi(step,input);
}
