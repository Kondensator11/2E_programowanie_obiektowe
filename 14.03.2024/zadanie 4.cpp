#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() 
{


	{
		double liczba;
		srand(time(NULL));

		liczba = (double)rand() / RAND_MAX * 9 + 1;
		cout << "wylosowana liczba to: " << liczba << endl;
		cout << "Liczba po zaokragleniu to: " << round(liczba) << endl;

	}
}