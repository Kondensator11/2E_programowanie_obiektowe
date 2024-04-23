#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    string sekretneSlowo("Tajemnica");

    srand(time(0));

    int pozycja = rand() % sekretneSlowo.size();

    cout << "Wylosowana litera: " << sekretneSlowo[pozycja];

    return 0;

}
