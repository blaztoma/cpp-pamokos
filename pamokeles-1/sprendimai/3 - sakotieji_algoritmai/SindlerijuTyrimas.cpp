#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Įveskite m: ";
    cin >> m;
    cout << "Įveskite n: ";
    cin >> n;

    if(n * m >= 1000000){
        cout << "Žuvų stebėjimui pakanka " << endl;
    }
    else{
        cout <<"Žuvų stebėjimui per mažai " << endl;
    }
    return 0;
}
