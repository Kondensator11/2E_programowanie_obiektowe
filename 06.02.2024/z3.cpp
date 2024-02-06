#include <iostream>
using namespace std;

double przelicznik(int mila)
{
	double kilometr;
	kilometr = mila * 1.609;
	cout << "wynik to " << kilometr << endl;
	return 0;
}

int main()
{
	double mila;
	cout << "podaj mile: " << endl;
	cin >> mila;
	przelicznik(mila);
}

