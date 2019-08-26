#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int main ()
{
const int n = 6, D = 2, G = 47, M = 7; //stale
int A[n][n], podzielna[n];
int i, j, podzielne, najwieksza, najmniejsza, licznik, i_min, j_min, schowek; //zmienne

    //Podpunkt 1
srand(time(0));
 for (i = 0; i < n; i++)
   for (j = 0; j < n; j++)
     A[i][j] = D+rand()%(G+1-D);

     //Podpunkt 2
cout <<"Drukuje tablice kwadratowa A[n][n], dla n=" << n << ". \nPod kazda kolumna drukuje informacje ile w danej kolumnie jest liczb podzielnych przez " << M << "." << endl << endl;

for (i = 0; i < n; i++)
  {for (j = 0; j < n; j++)
      cout << setw(5) << A[i][j];
    cout << endl;};
    cout << endl;


    //Podpunkt 3
 for (int j = 0; j < n; j++)
  {{
    podzielne = 0;
    for (int i = 0; i < n; i++)
      if ((A[i][j]) % M == 0)
        podzielne++;}
      podzielna[j] = podzielne;}

    for (i = 0; i < n; i++)
      cout << setw(5) << podzielna[i];

    //Podpunkt 4
najwieksza = D;
licznik = 0;
//najwiekszy element glownej przekatnej
for (i = 0; i < n; i++)
  {if (A[i][i] > najwieksza)
    {najwieksza = A[i][i];
    licznik = i;}}


//Najmniejszy element z 3 ostatnich wierszy
najmniejsza = A[n-3][0];
i_min = n - 3;
j_min = 0;
for (i = n - 3; i < n; i++)
   {for (j = 0; j < n; j++)
        if (A[i][j] < najmniejsza)
        {najmniejsza = A[i][j];
        i_min = i;
        j_min = j;}}


//Zamiana miejscami
schowek = A[licznik][licznik];
A[licznik][licznik] = A[i_min][j_min];
A[i_min][j_min] = schowek;

//Podpunkt 5 - drukuje tablice po zamianie
cout << endl << endl << "A tak wyglada tablica po zamianie miejscami najwiekszej liczby z glownej przekatnej \nz najmniejsza liczba z ostatnich trzech wierszy tablicy." << endl << endl;

for (i = 0; i < n; i++)
  {for (j = 0; j < n; j++)
      cout << setw(5) << A[i][j];
    cout << endl;};


return 0;
}


