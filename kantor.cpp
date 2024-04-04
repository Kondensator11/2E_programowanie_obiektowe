#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double iloscpieniedzy;
	int walutaprzedwymian¹;
	double walutapowymianie;
	cout << "ile siana w skarbcu: " << endl;
	cin >> iloscpieniedzy;
	cout << "1-lew bulgarski na pln" << endl;
	cout << "2-jen na pln" << endl;
	cout << "3-frank szwajcarski na pln" << endl;
	cin >> walutaprzedwymian¹;
	if (iloscpieniedzy < 1)
		cout << "nie da sie tak po swiat sie zepsuje" << endl;
	else
		switch (walutaprzedwymian¹)
	{
	case 1 :
		cout << "w skarbca masz tyle siana: " << iloscpieniedzy * 2.17 << endl;
		break;

	case 2:
		cout << "w skarbca masz tyle siana: " << iloscpieniedzy * 0.03 << endl;
		break;

	case 3:
		cout << "w skarbca masz tyle siana: " << iloscpieniedzy * 4.35 << endl;
		break;

	}
}
