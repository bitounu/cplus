#include <iostream>
using namespace std;

int main() {
    int D = 5;

    int first, second;
    cout << "Podaj pierwsza liczbe: ";
    cin >> first;
    cout << "Podaj druga liczbe: ";
    cin >> second;

    int evenCount = 0;   // licznik liczb parzystych
    int divSeqCount = 0; // ile razy wystąpiły 3 kolejne liczby podzielne przez D

    // sprawdzamy pierwsze dwie liczby
    if (first % 2 == 0) evenCount++;
    if (second % 2 == 0) evenCount++;

    int current;
    int prev1 = first;
    int prev2 = second;

    // do wykrycia 3 kolejnych podzielnych przez D
    int streak = 0;

    while (true) {
        cout << "Podaj liczbe: ";
        cin >> current;

        if (current == first || current == second)
            break;

        if (current % 2 == 0)
            evenCount++;

        if (current % D == 0)
            streak++;
        else
            streak = 0;

        if (streak == 3) {
            divSeqCount++;
            streak = 0; // zaczynamy nowe pasmo
        }

        // przesunięcie "okna" bez tablic
        prev1 = prev2;
        prev2 = current;
    }

    cout << "\nLiczb parzystych: " << evenCount << endl;
    cout << "Trojki podzielne przez " << D << ": " << divSeqCount << endl;

    return 0;
}

