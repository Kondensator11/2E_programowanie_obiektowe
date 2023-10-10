#include <string>
#include <iostream>
using namespace std;

int main()
{
    string login, haslo;
    cout << "podaj login " << endl;
    cin >> login;
    cout << "podaj haslo " << endl;
    cin >> haslo;
    if (login == "admin" && haslo == "haslo")
    {
        cout << "dobrze jesteś juz zalogowany " << endl;
    }
    else
    {
        cout << "niestety nie zostales zalogowany " << endl;
    }
    return 0;
}

