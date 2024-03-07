#include <iostream>
using namespace std;

int roznica(int a, int b)
{
	return a - b;
}
int main()
{
	int a, b;
	cout << "podaj 1 liczbe: " << endl;
	cin >> a;
	cout << "podaj 2 liczbe: " << endl;
	cin >> b;

	cout << "to sie rowna: " << roznica(a, b);

}