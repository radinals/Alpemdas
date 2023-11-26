#include <ctime>
#include <iostream>
using namespace std;

int
dapatkan_jam()
{
	time_t t = time(nullptr);
	tm *now = localtime(&t);
	return now->tm_hour;
}

void
ucapan_salam(int jam)
{
	if (jam > 0 && jam < 12)
		cout << "Selamat Pagi" << endl;
	else if (jam >= 12 && jam < 15)
		cout << "Selamat Siang" << endl;
	else if (jam >= 15 && jam < 18)
		cout << "Selamat Sore" << endl;

	else
		cout << "Selamat Malam" << endl;
}

int main()
{
	ucapan_salam(dapatkan_jam());
	return 0;
}
