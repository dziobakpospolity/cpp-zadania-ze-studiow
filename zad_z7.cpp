#include <iostream>
#include <cstdlib>
#include <fstream>


using namespace std;

struct sStudent
{
    string imie;
    float ocena;
};

int main ()
{
sStudent A[n][n];
const int n = 5;
string nazwapliku;
ifstream plk_we; // plik do odczytu


cout << "Podaj nazwe pliku: ";
    cin >> nazwapliku;
plk_we.open((nazwapliku.c_str()));

    if (plk_we.good() != true)
    {do
        {cout << "Nie mozna otworzyc pliku. Podaj ponownie nazwe pliku: " << endl;
        cin >> nazwapliku;
        plk_we.open(nazwapliku.c_str());}
     while (plk_we.good() != true);}


/*const int w = 3, k = 5, X = 3; //stale
double A[w][k], maks, suma;
int x;
const int precision = 6, szer = 9;
string nazwapliku;
ifstream plk_we; // plik do odczytu
ofstream plk_wy; // plik do zapisu


// Podpunkt a

    cout << "Podaj nazwe pliku: ";
    cin >> nazwapliku;
plk_we.open((nazwapliku.c_str()));

    if (plk_we.good() != true)
    {do
        {cout << "Nie mozna otworzyc pliku. Podaj ponownie nazwe pliku: " << endl;
        cin >> nazwapliku;
        plk_we.open(nazwapliku.c_str());}
     while (plk_we.good() != true);}

 for (int i = 0; i < w; i++)
    for (int j = 0; j < k; j++)
        {if (plk_we.eof())
            A[i][j] = X;
        else
            plk_we >> A[i][j];}

// Podpunkt b
 for (int i = 0; i < w; i++)
    {for (int j = 0; j < k; j++)
        {cout << fixed << setprecision(precision) << setw(szer) << A[i][j];
        }}
cout << endl;

// Podpunkt c

maks = A[0][0];

 for (int i = 0; i < k -1 ; i++)
    {if (A[0][i] > maks)
        maks = A[0][i];
    cout << A [0][i] << ", ";}

    for (int i = 0; i < w - 1 ; i++)
    {if (A[i][k-1] > maks)
            maks = A[i][k-1];
        cout <<  A[i][k-1] << ", ";}
    for (int i = k-1; i > 0; i--)
        {if (A[w-1][i] > maks)
            maks = A[w-1][i];
        cout << A [w-1][i] << ", ";}

    for (int i = w-1; i > 0; i--)
        {if (A[i][0] > maks)
            maks = A[i][0];

        cout << A [i][0] << ", " ;}

cout << endl;

    cout << "Maksymalna wartosc z elementow na obwodzie tablicy: " << maks << endl;


// Podpunkt d
suma = 0;

for (int i = 0; i < w; i++)
    {for (int j = 0; j < k; j++)
     suma += A[i][j];
    if (suma > maks)
        {for (x = 0; x < w; x++)
            A[i][x] = 0;}}

plk_we.close();

// Podpunkt e

    plk_wy.open("nowa.txt");

    for (int i = 0; i < w; i++)
        for (int j = 0; j < k; j++)
        plk_wy << fixed << setprecision(precision) << setw(szer) << A[i][j];


    plk_wy.close(); */


return 0;
}


