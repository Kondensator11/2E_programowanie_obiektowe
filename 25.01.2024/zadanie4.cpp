#include <iostream>
#include <cmath>
using namespace std;

double obwodPr(double promien)
{

    double obwodPr;
    obwodPr = 2 * 3.14 * promien;

    return obwodPr;
}
double polePr(double promien)
{
    double polePr;
    polePr = 3.14 * pow(promien, 2);

    return polePr;
}

int main()
{
    double promien;

    cout << "Podaj promien kola " << endl;
    cin >> promien;



    cout << "wynik obwodu to " << obwodPr(promien) << endl;
    cout << "wynik pola to " << polePr(promien) << endl;
}

