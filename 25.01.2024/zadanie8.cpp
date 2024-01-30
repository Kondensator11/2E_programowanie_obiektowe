#include <iostream>

using namespace std;

double obwodok(double, double&);
double poleok(double, double&);

int main()
{
    double promien;
    cout << "Podaj promien" << endl; cin >> promien;
    double pole = poleok(promien, pole);
    double obwod;
    obwodok(promien, obwod);

    cout << "Wyniki: " << endl;
    cout << "Pole wynosi " << pole << endl;
    cout << "Obwod wynosi " << obwod << endl;

    return 0;
}

double obwodok(double promien, double& obwod) {
    obwod = 2 * 3.14 * promien;

    return obwod;
}
double poleok(double promien, double& pole) {
    pole = 3.14 * promien * promien;

    return pole;
}
