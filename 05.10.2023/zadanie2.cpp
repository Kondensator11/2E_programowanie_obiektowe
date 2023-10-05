#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int liczba1 ,liczba2
  cout << "wpisz pierwsza liczbe: ";
  cin >> Liczba1;
  cout << "wpisz druga liczbe: ";
  cin >> Liczba2;
  
  if (Liczba1%Liczba2 == 0)
    cout << Liczba1 << " jest podzielna bez reszty przez " << Liczba2;
    else
    cout << Liczba1 << " nie jest podzielna bez reszty przez " << Liczba2;
}