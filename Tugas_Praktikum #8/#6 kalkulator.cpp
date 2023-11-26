#include <iostream>
using namespace std;

void calc(int in1,int in2){
    int sum = 0;
    char opr;

    cout << "operator apa yang dipilih (+)(-)(*)(/)(%) : ";
    cin >> opr;

    switch(opr){
        case '+':{
            cout << in1 << " + " << in2 <<  " = " << (sum = in1 + in2);
            break;
        }
        case '-':{
            cout << in1 << " - " << in2 <<  " = " << (sum = in1 - in2);
            break;
        }
        case '*':{
            cout << in1 << " * " << in2 <<  " = " << (sum = in1 * in2);
            break;
        }
        case '/':{
            cout << in1 << " / " << in2 <<  " = " << (sum = in1 / in2);
            break;
        }
        case '%':{
            cout << in1 << " % " << in2 <<  " = " << (sum = in1 % in2);
            break;
        }
        default:{
            return;
        }
    }
}

int main(){
    int input1,input2;
    
    cout << "masukan angka pertama : ";
    cin >> input1;
    cout << "masukan angka kedua : ";
    cin >> input2;

    calc(input1, input2);
}