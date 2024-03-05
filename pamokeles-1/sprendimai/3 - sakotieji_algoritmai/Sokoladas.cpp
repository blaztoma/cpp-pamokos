#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int m;
    double p1, p2, p3;
    
    // Įvedimas
    cout << "Įveskite m: ";
    cin >> m;
    cout << "Įveskite p1: ";
    cin >> p1;
    cout << "Įveskite p2: ";
    cin >> p2;
    cout << "Įveskite p3: ";
    cin >> p3;
    
    // Skaičiavimai
    double kaina1 = m*(100 * p1) / 100;
    double kaina2 = m*(100 * p2) / 25;
    double kaina3 = m*(100 * p3) / 50;
    
    double min = kaina1; //maziausia kaina
    string word = "pirmojo";
    if(kaina2 < min)
    {
        min = kaina2;
        word = "antrojo";
    }
    if(kaina3 < min)
    {
        min = kaina3;
        word = "trečiojo";
    }
    cout << std::fixed << std::setprecision(2);
    cout << "Mokytojai labiausiai apsimoka pirkti "<<word<<" gamintojo šokoladą. Ji turės sumokėti s = " << min  << " eurų." << endl;

    return 0;
}