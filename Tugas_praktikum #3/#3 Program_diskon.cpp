#include <iostream>
using namespace std;

int main(){
	int bayar, diskon, total;
	
	cout << "masukan nominal belanja : ";
	cin >> bayar;
	
	diskon = bayar * 0.10;
	cout << "anda mendapatkan diskon : " << diskon;
	
	total = bayar - diskon;
	cout << "total bayar : " << total;
}
