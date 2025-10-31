#include <iostream>
using namespace std;

int main() {
    const int M = 5;  // stała, możesz zmienić
    int prev2 = 0, prev1 = 0, curr;
    long long sumTwoDigit = 0;
    int countTwoDigit = 0;

    while (true) {
        cout << "Podaj liczbe: ";
        cin >> curr;

        // sprawdzenie, czy liczba jest dwucyfrowa
        if ((curr >= 10 && curr <= 99) || (curr <= -10 && curr >= -99)) {
            sumTwoDigit += curr;
            countTwoDigit++;
        }

        // warunek zatrzymania — musi być co najmniej 2 poprzedników
        if (prev2 != 0 || prev1 != 0) {
            if (curr % M == 0 && curr > prev1 && curr > prev2) {
                break;
            }
        }

        // przesunięcie poprzednich liczb
        prev2 = prev1;
        prev1 = curr;
    }

    if (countTwoDigit > 0)
        cout << "Srednia liczb dwucyfrowych: " << (double)sumTwoDigit / countTwoDigit << endl;
    else
        cout << "Nie wczytano zadnej liczby dwucyfrowej." << endl;

    return 0;
}

