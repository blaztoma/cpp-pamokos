#include <iostream>
using namespace std;

int main()
{
    int a, b, var;
    
    // Įvedimas
    cout << "Įveskite užduoties variantą: ";
    cin >> var;
    cout << "Įveskite a: ";
    cin >> a;
    cout << "Įveskite b: ";
    cin >> b;
    
    if(var == 1)
    {
        cout << "Atsakymas: x=" << a * b + 3 << endl;
    }
    else if(var == 2)
    {
        cout << "Atsakymas: x=" << a + b << endl;
    }
    else if(var == 3)
    {
        cout << "Atsakymas: x=" << a - b << endl;
    }

    return 0;
}