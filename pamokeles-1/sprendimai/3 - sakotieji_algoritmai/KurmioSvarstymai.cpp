#include <iostream>
using namespace std;

int main()
{
    double m, n, g;
    cout << "Kiek gramų sudaro 1000 grūdų? ";
    cin >> g;
    cout << "Kiek kurmis žada gyventi santuokoje? ";
    cin >> m;
    cout << "Kiek Coliukės išlaikymui kurmis ketina skirti kilogramų? ";
    cin >> n;



    if(m * 365.25 * 0.5 * (g /1000) < n*1000){
        cout << "Kurmiui vesti Coliukę apsimoka";
    }
    else{
        cout << "Kurmiui vesti Coliukės neapsimoka ";
    }


    return 0;
}
