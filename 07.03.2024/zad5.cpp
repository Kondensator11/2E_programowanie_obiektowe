#include <iostream>
using namespace std;

int iloraz(int a, int b, int c)
{
	if (a * a + b * b == c * c)
		return 1;
	else
		return 0;
}
int main()
{
	int a, b, c;
	cout << "podaj 1 liczbe: " << endl;
	cin >> a;
	cout << "podaj 2 liczbe: " << endl;
	cin >> b;
	cout << "podaj 3 liczbe: " << endl;
	cin >> c;

		cout << "to sie rowna: " << iloraz(a, b, c);

}