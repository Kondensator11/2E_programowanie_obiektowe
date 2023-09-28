
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,x,y,z;
    do{
    
    
    

 
    cout <<  "1   dodawanie" << endl;
    cout << "2   odejmowaie" << endl;
    cout << "3   mnożenie" << endl;
    cout <<  "4   dzielenie" << endl;
    cout <<  "0   koniec programu" << endl;
    
    cout << "wybierz sposób rozwiazania" << endl;
    cin >> z ;
    
    if (z==0)
        exit ;
    else if (z != 0){
    
    
    cout << "Podaj pierwsza liczba" << endl;
    cin >> x ;
    cout << "podaj druga liczbe" << endl;
    cin >> y ;
   
    }
    else if (z==1)
        cout << x+y << endl;
    else if(z==2)
        cout << x-y << endl;
    else if(z==3)
        cout << x*y << endl;
    else if(z==4)
        cout << x/y << endl;

    
    }while (z!=0);
}
