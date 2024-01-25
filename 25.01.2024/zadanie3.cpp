#include <iostream>
using namespace std;

double obwodPr(double bok1, double bok2)
{

    double obwodPr;
    obwodPr = 2 * bok1 + 2 * bok2;

    return obwodPr;
}
double polePr(double bok1, double bok2)
{
    double polePr;
    polePr = bok1 * bok2;

    return polePr;
}

int main()
{
    double bok1, bok2;

    cout << "Podaj pierwszy bok prostokata " << endl;
    cin >> bok1;
    cout << "Podaj drugi bok prostokata " << endl;
    cin >> bok2;


    cout << "wynik obwodu to " << obwodPr(bok1, bok2) << endl;
    cout << "wynik pola to " << polePr(bok1, bok2) << endl;
}

