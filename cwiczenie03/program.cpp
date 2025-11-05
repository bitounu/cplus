#include <iostream>
using namespace std;



int main() {

	const int D = 5;
	const int MAX = 9999999;
    int curr;
    int prev1 = 0, prev2 = 0;
    int dividedByD = MAX;	  // tu można ustawić MAX dla int
							  // ale początkujący nie wie co to takiego
							  // myślę nad użyciem wartości 0 i mnożeniu
							  // zmiennej curr przez -1

    while (true)
    {
        cout << "Podaj liczbe: ";
        cin >> curr;

//		cout << "prev1: " << prev1 << " prev2: " << prev2 << endl;

		if (prev1 != 0 && prev2 != 0)
		{
			if (curr % D == 0 && curr < dividedByD)
			{
//				cout << "curr: " << curr << "podzielna przez 5 i mniejsza" << endl;
				dividedByD = curr;
			}
			if (curr % 2 != 0 && curr < prev1 && curr < prev2)
			{
				break;
			}
		}
//		cout << "dividedByD: " << dividedByD << endl;
		prev2 = prev1;
		prev1 = curr;
    }
	cout << "--------------- THE END --------------" << endl;
	if (dividedByD != MAX) 
	{
		cout << "Najmniejsza podzielna przez D = 5 to: " << dividedByD << endl;
	}
	else
	{
		cout << "Nie było liczby spełniającej zadane warunki." << endl;
	}

}
