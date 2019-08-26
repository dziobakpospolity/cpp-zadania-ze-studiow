#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

void drukuj(int *tab, int n)
{
const int X = 4;
int p = 0;

{for (int i=0; i<n; i++)
{
    cout << tab[i] << "\t";
    p++;
    if (p >= X)
    {
    cout <<"\n";
    p=0;}}


}
cout << endl << endl;
}

int main ()
{
const int n = 6, X = 4;
int A[n][n], i, j, suma = 0, licznik = 0;
float srednia;

 cout << "Tablica A:" << endl;
{
const int D = 2, G = 47;

srand(time(0)); //wypelnianie liczbami losowymi (z podrecznika)
 for (i = 0; i < n; i++)
   for (j = 0; j < n; j++)
     A[i][j] = D+rand()%(G+1-D);
}

for (i = 0; i < n; i++)
  {for (j = 0; j < n; j++)
      cout << A[i][j] << "\t";
      cout << endl;}

// Podpunkt 1

for (i = 0; i < n; i++)
  suma = suma + A[i][i];
  cout << endl;
  srednia=(float)suma/n;
  cout << "Srednia elementow lezacych na glownej przekatnej: "<< srednia << endl;
  cout << endl;

// Podpunkt 2

for(i=0;i<n-1;i++)
    {for(j=i+1;j<n;j++)
        if (A[i][j] > srednia)
            licznik++;}

int b = licznik, k = 0;
int * B = new int[b];

for(i=0;i<n-1;i++)
    {for(j=i+1;j<n;j++)
        if (A[i][j] > srednia)
            {B[k]=A[i][j];
                if (k<b)
                k++;}}

cout <<"Elementy lezace nad glowna przekatna i bedace wieksze od sredniej elementow z glownej przekatnej: "<< endl;
for (i = 0; i < b; i++)
      cout << B[i] << "\t";
      cout << endl;
      cout << endl;



//Podpunkt 3

licznik = 0, k=0;
for(i=1;i<n;i++)
    {for(j=0;j<i;j++)
        if (A[i][j] < srednia)
            licznik++;}

int c=licznik;
int * C = new int[c];

for(i=1;i<n;i++)
    {for(j=0;j<i;j++)
        if (A[i][j] < srednia)
            {C[k]=A[i][j];
                if (k<c)
                k++;}}

cout <<"Elementy lezace pod glowna przekatna i bedace mniejsze od sredniej elementow z glownej przekatnej: "<< endl;
for (i = 0; i < c; i++)
      cout <<  C[i] << "\t";
      cout << endl;
      cout << endl;



//Podpunkt 4

int d= b+c;
int * D = new int[d];

for(i=0;i<b;i++)
    D[i] = B[i];

k = b;
for(i=0;i<c;i++)
    {D[k] = C[i];
        if (k<d)
            k++;}

    cout << "Elementy tablicy B i C: "<< endl;

for (i = 0; i < d; i++)
      cout <<  D[i] << "\t";
      cout << endl;
      cout << endl;



//Podpunkt 5

 cout << "Tablica B:" << endl;
 drukuj(B,b);
 cout << "Tablica c:" << endl;
 drukuj(C,c);
 cout << "Tablica D:" << endl;
 drukuj(D,d);


delete[] B;
delete[] C;
delete[] D;

return 0;
}


