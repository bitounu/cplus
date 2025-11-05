#include <iostream>
using namespace std;

int main() {
    char first, c;
    cout << "Podaj pierwszy znak: ";
    cin >> first;

    int small = 0, big = 0;
    char prev = first;
    bool stop = false;

    // zlicz pierwszy znak (jeśli nie będzie częścią zakończenia)
    if (first >= 'a' && first <= 'z') small++;
    else if (first >= 'A' && first <= 'Z') big++;

    while (!stop && cin >> c) {
        // jeśli drugi taki sam jak pierwszy pojawia się po sobie, koniec
        if (prev == first && c == first) {
            stop = true;
            break;
        }

        if (c >= 'a' && c <= 'z') small++;
        else if (c >= 'A' && c <= 'Z') big++;

        prev = c;
    }

    cout << "\nWiecej bylo ";
    if (small > big) cout << "malych liter (" << small << ").\n";
    else if (big > small) cout << "duzych liter (" << big << ").\n";
    else cout << "tyle samo malych i duzych liter (" << small << ").\n";

    return 0;
}

