#include <iostream>
using namespace std;

int main()
{
    //s - eurai per men, k - euru paskolai, n - asmesnu kiekis, t - tevo atlyginimas, m - motinos atlyginimas
    double s, k, n, t, m;

    cout << "Kokios turi būti pajamos šeimos nariui? ";
    cin >> s;
    cout << "Kiek turi likti eurų paskolai mokėti? ";
    cin >> k;
    cout << "Kiek šeimą sudaro asmenų? ";
    cin >> n;
    cout << "Koks tėvo atlyginimas? ";
    cin >> t;
    cout << "Koks mamos atlyginimas? ";
    cin >> m;

    double bendrosPajamos = t + m;

   if (bendrosPajamos >= s * n && (bendrosPajamos - s * n) >= k){
        cout << "Bankas suteiks paskolą";
    }
    else{
        cout << "Bankas paskolos nesuteiks";
    }


    return 0;
}
