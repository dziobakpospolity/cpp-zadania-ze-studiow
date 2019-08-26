#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
const int n = 6;
int A[n], i, mini, maxi, suma, schowek;
float srednia;



// Podpunkt a)
cout << "Podaj " << n << " liczb calkowitych." << endl;
for (int i = 0; i < n; i++)
    cin >> A[i];

    mini = A[0];
    maxi = A[0];
for (i = 0; i < n; i++)
  {

    if (A[i] < mini)
        mini = A[i];
    if (A[i] > maxi)
        maxi = A[i];
  };

cout << "Najwieksza liczba ciagu: " << maxi << endl;
cout << "Najmniejsza liczba ciagu: " << mini << endl;

cout << "Roznica miedzy kazda kolejna liczba ciagu, a srednia liczb tego ciagu: " << endl;
suma = 0;
for (i = 0; i < n; i++)
    suma = suma + A[i];

srednia = (float)suma / n;

for (i = 0; i < n; i++)
    cout << A[i] - srednia << endl;


 // Podpunkt b)
 cout << "Drukujemy ciag: " << endl;
for (int i = 0; i < n; i++)
    cout << A[i]<< endl;

cout << "A tutaj przesuwamy o jeden w lewo: " << endl;

schowek = A[0];
for (i = 0; i < n-1; i++)
    A[i] = A[i+1];
A[n-1] = schowek;

for (int i = 0; i < n; i++)
    cout << A[i]<< endl;;

// Podpunkt c)
for (int i = 0; i < n-1; i++)
    if (A[i] > A[i+1])
    {schowek = A[i];
    A[i] = A[i+1];
    A[i+1] = schowek;}

// Podpunkt d)
cout << "Zamieniamy miejscami sasiednie elementy w kolejnych parach 0-1, 1-2, itd, jesli pierwszy element z tej pary jest wiekszy od drugiego:" << endl;
for (int i = 0; i < n; i++)
    cout << A[i]<< endl;;

return 0;
}


