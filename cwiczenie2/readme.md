Napisać program, który wczytuje kolejno liczby całkowite aż do powtórnego wczytania liczby takiej, jak pierwsza lub druga wczytana liczba. Wydrukować informację, ile wczytano liczb parzystych oraz ile razy wczytano po sobie trzy liczby podzielne przez stałą D.

1. ustalamy stałą D
```
const int D = 5;
```

2. pobieramy dwie pierwsze liczby:
```
    int first, second;
    cout << "Podaj pierwsza liczbe: ";
    cin >> first;
    cout << "Podaj druga liczbe: ";
    cin >> second;
```

3. tworzymy zmienne na zapamiętanie ilości liczb parzystych
    oraz na ilość trzech kolejnych podzielnych przez D:
```
    int evenCount = 0;   // licznik liczb parzystych
    int divSeqCount = 0; // ile razy wystąpiły 3 kolejne liczby podzielne przez D
```

4. sprawdzamy parzystość dwóch parzystych liczb i jakby co zapisujemy do evenCount:
```
    if (first % 2 == 0) evenCount++;
    if (second % 2 == 0) evenCount++;
```

5. tworzymy zmienną na aktualną liczbę wprowadzaną z klawiatrury:
```
    int current;
```

6. potrzebne nam zmienne do pamiętania dwóch poprzednich liczb,
    deklarujemy je i od razu używamy do zapamiętania w nich dwóch
    pierwszych liczb:
```
    int prev1 = first;
    int prev2 = second;
```


7. pętla wczytująca liczby
```
while (true) {
    cout << "Podaj liczbe: ";
    cin >> curr;
}
```

8. warunki sprawdzające:
    jeśli obecna liczba taka jak pierwsza lub druga to wyjście:
```
        if (current == first || current == second)
            break;
```

    jeśli parzysta to zwiększ licznik liczb parzystych:
```
        if (current % 2 == 0)
            evenCount++;
```

    jeśli podzielna przez D to zwiększ licznik pasma podzielnych
    lecz jeśli nie, to wyzeruj licznik:
```
        if (current % D == 0)
            streak++;
        else
            streak = 0;
```

    jeśli w paśmie są 3 to zwiększ licznik ilości pasm (wiem, chore!):
```
        if (streak == 3) {
            divSeqCount++;
            streak = 0; // zaczynamy nowe pasmo
        }
```

9. przesuwamy obecne liczby wstecz
```
        prev1 = prev2;
        prev2 = current;
```

10. wypisanie wyników:
```
    cout << "\nLiczb parzystych: " << evenCount << endl;
    cout << "Trojki podzielne przez " << D << ": " << divSeqCount << endl;

    return 0;
```
