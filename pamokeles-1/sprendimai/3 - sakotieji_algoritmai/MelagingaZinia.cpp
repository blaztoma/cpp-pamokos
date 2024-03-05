#include <iostream>
using namespace std;

int main()
{
    // k - litai, t - max svoris
    double k, t;
    cout << "Kiek baudos skyrė teismas (tūkst. Lt.)? ";
    cin >> k;
    cout << "Kiek tonų talpina priekaba? ";
    cin >> t;


    double WeightMoney = k * 100 * 0.83 *1000;

    double CarryingCapacity = t * 1000000;

    if( WeightMoney >= CarryingCapacity ){

        cout << "Monetos į mašinos priekabą netilps" << endl;
    }
    else{
        cout << "Monetos į mašinos priekabą tilps" << endl;
    }


    return 0;
}
