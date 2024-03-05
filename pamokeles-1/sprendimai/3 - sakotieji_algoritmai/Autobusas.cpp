#include <iostream>
using namespace std;

int main()
{
    int t1, t2, t;
    
    // Įvedimas
    cout << "Įveskite t1: ";
    cin >> t1;
    cout << "Įveskite t2: ";
    cin >> t2;
    cout << "Įveskite t: ";
    cin >> t;
    
    // Tikrinimas ar spės nueiti arba nubėgti
    if (t1 <= t) {
        cout << "Keleivis spės nueiti į autobusą." << endl;
    } else if (t2 <= t) {
        cout << "Keleivis spės nubėgti į autobusą." << endl;
    } else {
        cout << "Keleivis nespės į autobusą." << endl;
    }

    return 0;
}