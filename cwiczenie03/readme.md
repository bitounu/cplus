Napisać program, który wczytuje liczby całkowite aż do wczytania liczby nieparzystej i zarazem mniejszej od obu poprzedników. Wydrukować najmniejszą ze wszystkich wczytanych liczb podzielnych przez D (D-stała) lub informację, że takiej liczby nie było.


1. potrzebujemy stałej D:
```
    const int D = 5;
```

2. pobieramy liczby od użytkownika w pętli:
```
    int curr;
    while (true)
    {
        cout << "Podaj liczbe: ";
        cin >> curr;
    }
```

3. sprawdzamy czy liczba jest nieparzysta:
```
    if (curr % 2 != 0)
```
i zarazam mniejsza od 2 poprzedników, czyli musimy zadeklarować dwie zmienne pomocnicze:
```
    int prev1 = 0, prev2 = 0;
```
i dodać do poprzedniego `if-a`:
```
    if (curr % 2!= 0 && curr > prev1 && curr > prev2)
```
i wyjść z pętli `while` gdy warunek jest spełniony:
```
    if (curr % 2!= 0 && curr > prev1 && curr > prev2) break;
```


4. będziemy potrzebować zmiennej przechowującej najmniejszą z dotychczasowych liczb podzielnych przez D:
```
    int dividedByD = 0;
```


5. sprawdzamy czy aktualna liczba jest podzielna przez D:
```
    if (curr % D == 0)
```
oraz czy jest mniejsza od najmniejszej zapamiętanej w `dividedByD`, jeśli tak to zapisujemy ją do tej zmiennej bo jest w danym momencie najmniejsza:
```
    if (curr % D == 0 && curr < dividedByD)
    {
        dividedByD = curr;
    }
```

