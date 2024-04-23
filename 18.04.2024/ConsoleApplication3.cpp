#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	ifstream plik("C:\jdd.txt");
	plik.seekg(0, ios::end);

	int dlugosc;
	dlugosc = plik.tellg();

	cout << "Dlugosc pliku w bajtach wynosi: " << dlugosc << "." << endl;

	return 0;
}

