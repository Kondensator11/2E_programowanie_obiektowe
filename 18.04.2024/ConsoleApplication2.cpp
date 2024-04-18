#include<fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ifstream plik("C:\plik.txt");

    if (plik)
    {
        string linia;
        while (getline(plik, linia))
        {
            cout << linia << endl;
        }
    }
    else
    {
        cout << "B£AD: nie mozna otowrzyc pliku." << endl;
    }
    return 0;
}

