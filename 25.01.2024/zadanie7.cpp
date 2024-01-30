#include <iostream>

using namespace std;

void obwodok(double, double&);
void poleok(double, double&);

int main()
{
    double promien;
    cout << "Podaj promien" << endl; cin >> promien;
    double pole;
    poleok(promien, pole);
    double obwod;
    obwodok(promien, obwod);

    cout << "Wyniki: " << endl;
    cout << "Pole wynosi " << pole << endl;
    cout << "Obwod wynosi " << obwod << endl;

    return 0;
}

void obwodok(double promien, double& obwod) {
    2 * 3.14 * promien;
}
void poleok(double promien, double& pole) {
    3.14 * promien * promien;
}

