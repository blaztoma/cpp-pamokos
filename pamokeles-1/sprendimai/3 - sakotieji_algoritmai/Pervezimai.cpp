#include <iostream>
#include <cmath>
using namespace std;

int main()
{
       double n, m;
       cout << "Kiek reikia pervežti dėžių? ";
       cin >> n;
       cout << "Kiek telpa dėžių į mašiną? ";
       cin >> m;

       cout << ceil(n / m);

    return 0;
}
