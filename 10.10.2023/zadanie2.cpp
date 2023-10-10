#include <string>
#include <iostream>
using namespace std;

int main()
{
    string login, haslo;
   do 
   {
        cout << "podaj login " << endl;
        cin >> login;
        cout << "podaj haslo " << endl;
        cin >> haslo;
        if (login == "admin" && haslo == "haslo") {

            cout << "dobrze jestes juz zalogowany " << endl;
            break;
        }

        else if (login == "admin1" && haslo == "haslo1") {

            cout << "niestety nie zostales zalogowany " << endl;
            break;
        }
        else if (login == "admin2" && haslo == "haslo2") {

            cout << " dobrze jests juz zalogowany";
            break;
        }
        else

            cout << "niestety nie zostales zalogowany" << endl;
            
   } while (true);

    return 0;
}

