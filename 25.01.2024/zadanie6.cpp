#include <iostream>
#include <cmath>

using namespace std;

double obwodok(const double*);
double poleok(const double*);

int main()
{
    double promien;
    cout << "Podaj promien kola: " << endl;
    cin >> promien;

    double* w_promien = &promien;

    cout << "Oto twoj obwod:" << obwodok(w_promien) << endl;
    cout << "Oto twoje pole:" << poleok(w_promien) << endl;
}

double obwodok(const double* promien)
{
    double obwodOk;
    obwodOk = 2 * 3.14 * *promien;

    return obwodOk;

}
double poleok(const double* promien)
{
    double poleOk;
    poleOk = 3.14 * pow(*promien, 2);

    return poleOk;

}
