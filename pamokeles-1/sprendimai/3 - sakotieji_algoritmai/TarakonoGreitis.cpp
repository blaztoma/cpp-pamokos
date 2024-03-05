#include <iostream>
using namespace std;

int main()
{
    double s, c, v;
    cout << "Įveskite s: ";
    cin >> s;
    cout << "Įveskite c: ";
    cin >> c;
    cout << "Įveskite v: ";
    cin >> v;


    if((c/100) / s > v){
        cout << "Tarakonas greitesnis už musę";

    }
    else{
         cout << "Musė greitesnė už tarakoną";
    }

    return 0;
}
