Napisać program, który wczytuje ciąg znaków aż do napotkania kolejno dwóch jednakowych znaków równych pierwszemu wczytanemu. Wydrukować informację, czego wczytano więcej: małych liter czy dużych liter (nie licząc tych dwóch ostatnich znaków).

1. prosimy o pierwszy znak, którego będziemy potem poszukiwać,
    zapisujemy go w zmiennej 'first':
```
    char first, c;
    cout << "Podaj pierwszy znak: ";
    cin >> first;
```

2. deklarujemy zmienne `small` oraz `big`, które będą przechowywać
    ilość małych i dużych liter:
```
    int small = 0, big = 0;
```
