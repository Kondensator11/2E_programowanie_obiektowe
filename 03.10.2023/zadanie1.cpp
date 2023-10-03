
#include <iostream>
using namespace std;


int main()
{
	int c;
	cout << "podaj liczbe od 1 do 30" << endl;
	cin >> c;
	if ( c <=30)
	switch (c)
	{
	case 1:
		cout << "marka samochodu: bmw" << endl; break;

	case 2:
		cout << "marka samochodu: kałaudi" << endl; break;
	case 3:
		cout << "marka samochodu: dacia" << endl; break;
	case 4:
		cout << "marka samochodu: kia" << endl; break;
	case 5:
		cout << "marka samochodu: mazda" << endl; break;
	case 6:
		cout << "marka samochodu: alfa romeo" << endl; break;
	case 7:
		cout << "marka samochodu: alpina" << endl; break;
	case 8:
		cout << "marka samochodu: aston martin" << endl; break;
	case 9:
		cout << "marka samochodu: andoria" << endl; break;
	case 10:
		cout << "marka samochodu: bentley" << endl; break;
	case 11:
		cout << "marka samochodu: corvette" << endl; break;
	case 12:
		cout << "marka samochodu: citroen" << endl; break;
	case 13:
		cout << "marka samochodu: cadilac" << endl; break;
	case 14:
		cout << "marka samochodu: cupra" << endl; break;
	case 15:
		cout << "marka samochodu: damis" << endl; break;
	case 16:
		cout << "marka samochodu: dodge" << endl; break;
	case 17:
		cout << "marka samochodu: dmc" << endl; break;
	case 18:
		cout << "marka samochodu: ferrari" << endl; break;
	case 19:
		cout << "marka samochodu: fiat" << endl; break;
	case 20:
		cout << "marka samochodu: ford" << endl; break;
	case 21:
		cout << "marka samochodu: fuso" << endl; break;
	case 22:
		cout << "marka samochodu: gaz" << endl; break;
	case 23:
		cout << "marka samochodu: honda" << endl; break;
	case 24:
		cout << "marka samochodu: ineos" << endl; break;
	case 25:
		cout << "marka samochodu: infiniti" << endl; break;
	case 26:
		cout << "marka samochodu: jeep" << endl; break;
	case 27:
		cout << "marka samochodu: jaguar" << endl; break;
	case 28:
		cout << "marka samochodu: lada" << endl; break;
	case 29:
		cout << "marka samochodu: lancia" << endl; break;
	case 30:
		cout << "marka samochodu: lexus" << endl; break;
	}
		if (c > 30)
		{
			cout << "bledna liczba " << endl;
		}
		return 0;

	
}

