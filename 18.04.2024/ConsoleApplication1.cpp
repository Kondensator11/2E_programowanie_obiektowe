#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()

{
	string const nazwaPliku("C:\scores.txt");
	ofstream mojStrumien(nazwaPliku.c_str());

	if (mojStrumien)
	{
		mojStrumien << "Witaj, jestem daniem zapisywania w pliku" << endl;
		mojStrumien << 42.1337 << endl;
		int age(23);
		mojStrumien << "Mam " << age << " lata." << endl;
	}
	{
		cout << "B£¥D: nie mozna otworzyc pliku." << endl;
	}
	return 0;
}

