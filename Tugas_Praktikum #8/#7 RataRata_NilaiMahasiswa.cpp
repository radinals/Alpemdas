#include <iostream>
#include <limits>
using namespace std;

void clear(){
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
}

void opr(int nilai) {
		if (nilai >= 90){
		cout << "nilai anda adalah A"<<endl;
	}else if(nilai >= 80){
		cout << "nilai anda adalah B"<<endl;
	}else if(nilai >= 70){
		cout << "nilai anda adalah C"<<endl;
	}else if(nilai >= 60){
		cout << "nilai anda adalah D"<<endl;
	}else if(nilai < 60){
		cout << "nilai anda adalah E"<<endl;
	}else{
		cout << "ERROR: nilai tidak valid!" << endl;
	}
}

int main(){
	int arr_maximal = 5;
	int mahasiswa[arr_maximal];
	string nama[arr_maximal];
	int rata_rata;
	
	for(int i = 0; i < arr_maximal; i++){
		cout << "mahasiswa ke " << (i+1) << endl;
		cout << "inputkan nama mahasiswa : ";
		cin >> nama[i];
		clear();
			
		while(true) {
			cout << "masukan nilai mahasiswa (1-100) : ";
			cin >> mahasiswa[i];
			clear();
			if (mahasiswa[i] <= 100) 
				break;
			else
				cout << "Input Salah!" << endl;
		}
		rata_rata += mahasiswa[i];
		opr(mahasiswa[i]);
		cout << endl;
	}

	rata_rata /= arr_maximal;
	cout << "rata rata nilai mahasiswa : " << rata_rata ;
}
