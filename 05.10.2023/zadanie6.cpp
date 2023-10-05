#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int x;
    cout << "Wprowadz rok ";
    cin >> x;
    if((x%4==0 && x%100!=0 )  || x%400==0)
        cout << "W roku " << x << "Luty miał 29 dni";
    else
        cout << "W roku " << x << " Luty miał 28 dni";
}