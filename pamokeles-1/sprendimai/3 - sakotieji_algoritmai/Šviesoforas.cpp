#include <iostream>
#include <string>
using namespace std;

int main()
{
    int minutes;

    cin >> minutes;

    // Apskaičiuojame, kuri šviesa dega
    int cycle = (minutes) % 5;
    string light;

    if (cycle ==  1 || cycle ==  2) {
        light = "Dega žalia šviesa";
    } 
    else if (cycle == 3) {
        light = "Dega žalia šviesa, tuoj užsidegs raudona";
    }
    else if (cycle == 4) {
        light = "Dega raudona šviesa";
    }
    else if (cycle == 0) {
        light = "Dega raudona šviesa, tuoj užsidegs žalia";
    }

    // Išvestis
    cout << light << endl;

    return 0;
}