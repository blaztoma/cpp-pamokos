#include <iostream>
using namespace std;

int main()
{
    int t;

    // Įvestis
    cout << "Įveskite kiek liko minučių: ";
    cin >> t;

    // Tikrinimas ir išvestis
    if (t > 30) {
        cout << "Liko dar labai daug laiko." << endl;
    } else if (t > 15) {
        cout << "Liko dar nemažai laiko." << endl;
    } else if (t > 7) {
        cout << "Liko nedaug laiko." << endl;
    } else {
        cout << "Pamoka baigiasi." << endl;
    }

    return 0;
}