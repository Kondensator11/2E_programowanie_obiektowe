#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int x ,y ,z;
    cout << "Wprowadz pierwsza liczbe: ";
    cin >> x;
    cout << "Wprowadz druga liczbe: ";
    cin >> y;
    cout << "Wprowadz trzecia liczbe: ";
    cin >> z;
    if(x < y && x < z)
        cout << x << " jest najmniejsze";
    else if( y < x && y < z)
        cout << x << " jest najmniejsze";
    else if(z < y && z < x)
        cout << z << " jest najmniejsze";
    else
        cout << "Liczby sa te same";
    
}