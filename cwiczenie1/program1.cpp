#include <iostream>
using namespace std;

int main() {
    const int M = 5;  // stała, możesz zmienić
    int poprzednia2 = 0, poprzednia1 = 0, curr;
    long long suma2cyfrowych = 0;
    int ilosc2cyfrowych = 0;

    while (true) {
        cout << "Podaj liczbe: ";
        cin >> curr;

        // sprawdzenie, czy liczba jest dwucyfrowa
        if ((curr >= 10 && curr <= 99) || (curr <= -10 && curr >= -99)) {
            suma2cyfrowych += curr;
            ilosc2cyfrowych++;
        }

        // warunek zatrzymania — musi być co najmniej 2 poprzedników
        if (poprzednia2 != 0 || poprzednia1 != 0) {
            if (curr % M == 0 && curr > poprzednia1 && curr > poprzednia2) {
                break;
            }
        }

        // przesunięcie poprzednich liczb
        poprzednia2 = poprzednia1;
        poprzednia1 = curr;
    }

    if (ilosc2cyfrowych > 0)
        cout << "Srednia liczb dwucyfrowych: " << (double)suma2cyfrowych / ilosc2cyfrowych << endl;
    else
        cout << "Nie wczytano zadnej liczby dwucyfrowej." << endl;

    return 0;
}

