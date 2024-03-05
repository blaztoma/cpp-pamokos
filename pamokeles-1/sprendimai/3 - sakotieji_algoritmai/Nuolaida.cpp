#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int grupe;
    double bilietoKaina;

    // Įvestis
    cout << "Įveskite grupę: ";
    cin >> grupe;
    cout << "Įveskite bilieto kainą: ";
    cin >> bilietoKaina;

    // Skaičiavimai
    double nuolaida;
    if (grupe == 1) {
        nuolaida = 0.5;
    }
    else if (grupe == 2) {
        nuolaida = 0.5;
    } 
    else if (grupe == 3) {
        nuolaida = 0.75;
    } 

    double galutineKaina = bilietoKaina * (1 - nuolaida);

    // Išvestis
    cout << fixed << setprecision(2);
    cout << galutineKaina << endl;

    return 0;
}