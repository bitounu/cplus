Napisać program, który wczytuje liczby całkowite aż do wczytania liczby podzielnej przez M (M- stała) i zarazem większej od obu poprzedników. Wydrukować średnią wszystkich wczytanych liczb dwucyfrowych.

Rozbijmy zadanie na etapy:

0. zadeklarowanie i przypisanie wartości jakieś stałej M będącej dzielnikiem w zadaniu:
```
const int M = 5;
```

1. pobieranie liczby od użytkownika w pętli i zapamiętanie w zmiennej curr:
```
int curr;

while (true)
{
    cout << "Podaj liczbe: ";
    cin >> curr;
}
```

2. pobieranie i sprawdzenie czy liczba ma 2 cyfry (pomijamy sprawdzanie 2-cyfrowych liczb ujemnych):
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
    b. zapisanie ilości ile było do tej pory 2-cyfrowych, bo średnią liczymy dzieląc przez tę ilość
    wniosek: potrzebujemy zadeklarowania dwóch zmiennych: suma2cyfrowych, ilosc2cyfrowych
```
long long suma2cyfrowych = 0; # long long bo nie wiemy ile tego będzie
int ilosc2cyfrowych = 0;
````

4. sprawdzamy czy mamy już co najmniej dwie poprzednie zmienne:
    potrzebujemy dwóch zmiennych, które na początku mają wartość zero:
    a. jedna zapamiętuje poprzednią liczbę: poprzednia1
    b. druga zapamiętuje jeszcze poprzednią: poprzednia2
    musimy też przesuwać wartość zmiennej poprzedniej do zmienne wsześniejszej
    a wartość obecnej do poprzedniej:
```
    int poprzednia2 = 0, poprzednia1 = 0;
    if (poprzednia2 != 0 || poprzednia1 != 0)
    {
    }
    poprzednia2 = poprzednia1;
    poprzednia1 = curr;
```


5.  sprawdzamy czy dwie poprzednie były mniejsze od teraz wprowadzonej (curr):
    sprawdzamy ten warunek w przypadku gdy juz spełniony jest warunek z pkt. 4
    i oczywiście sprawdzamy czy aktualna liczba jest podzielna przez M bez reszty.
    Jeśli wszystkie warunki są spełnione to robimy przerwanie pętli
```
    if (poprzednia2 != 0 || poprzednia1 != 0) {
        if (curr % M == 0 && curr > poprzednia1 && curr > poprzednia2) {
            break;
        }
    }
```

6. wypisujemy średnią ale tylko wtedy kiedy była podana chociaż jedna liczba 2-cyfrowa
```
if (ilosc2cyfrowych > 0)
    cout << "Srednia liczb dwucyfrowych: " << (double)suma2cyfrowych / ilosc2cyfrowych << endl;
else
    cout << "Nie wczytano zadnej liczby dwucyfrowej." << endl;

return 0;
```
