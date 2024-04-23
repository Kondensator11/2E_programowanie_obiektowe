#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

string mieszajLitery(string slowo)
{
    string mieszanka;
    int pozycja(0);

    while (slowo.size() != 0)
    {
        pozycja = rand() % slowo.size();

        mieszanka += slowo[pozycja];

        slowo.erase(pozycja, 1);
    }
    return mieszanka;
}
int main()
{
    string sekretneSlowo, pomieszaneSlowo, slowoUzytkownika;

    srand(time(0));

    cout << "Wpisz slowo" << endl;
    cin >> sekretneSlowo;

    pomieszaneSlowo = mieszajLitery(sekretneSlowo);

    do
    {
        cout << endl << "Co to za slowo? " << pomieszaneSlowo << endl;
        cin >> slowoUzytkownika;

        if (slowoUzytkownika == sekretneSlowo)
        {
            cout << "Brawo! " << endl;
        }
        else
        {
            cout << "le!" << endl;
        }

    } while (slowoUzytkownika != sekretneSlowo);
    

    return 0;
}

