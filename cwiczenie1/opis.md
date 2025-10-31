Napisać program, który wczytuje liczby całkowite aż do wczytania liczby podzielnej przez M (M- stała) i zarazem większej od obu poprzedników. Wydrukować średnią wszystkich wczytanych liczb dwucyfrowych.

Rozbijmy zadanie na etapy:

1. pobieranie liczby od użytkownika w pętli:
```
while (true)
{
    cout << "Podaj liczbe: ";
    cin >> curr;
}
```

2. pobieranie i sprawdzenie czy liczba ma 2 cyfry:
```
while (true)
{
    cout << "Podaj liczbe: ";
    cin >> curr;
    if ( curr >= 10 && curr <= 99)
    {
        // spełnione tylko jeśli ma 2 cyry
    }
}
```
3. jeśli ma 2 cyfry to zapmiętanie dwóch rzeczy:
    a. dodanie do ogólnej sumy, bo z tego będzie wyciągana średnia
    b. zapisanie liczbt ile było do tej pory 2-cyfrowych liczba bo średnią liczymy dzieląc przez tę liczbę
    wniosek: potrzebujemy zadeklarowania dwóch zmiennych: suma2cyfrowych, liczba2cyfrowych
```
long long suma2cyfrowych = 0;
int liczba2cyfrowych = 0;
````
4. 
