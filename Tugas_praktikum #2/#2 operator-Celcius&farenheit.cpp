#include <iostream>
using namespace std;

int main(){
	int celcius, farenheit;
	
	cout<<"\t\t\t<RIFKI SYAHDAN PRASETYO"<<endl<<endl;
	
	cout<<"inputkan suhu dalam satuan celcius : ";
	cin>>celcius;
	
	//farenheit = 1.8 *celcius+32;//rumus konversi
	cout<<"suhu dalam farenheit : "<< (float(celcius)*1.8+32);
	
	return 0;
}
