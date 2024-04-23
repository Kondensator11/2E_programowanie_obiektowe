#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int lbLosowa(0);

    srand(time(0));

    lbLosowa = rand() % 5;

    return 0;
}
