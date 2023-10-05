#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int x;
    cout << "Podaj liczbe w przedziale od 100 do 150: ";
    cin >> x;
    if (x >= 100 && x <= 150)
        cout << "Liczba należy do tego przedziału";
    else
        cout << "Liczba nie należy do tego przedziału";
}