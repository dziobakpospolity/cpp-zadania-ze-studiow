#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
int N; //liczba całkowita
int licznik; //licznik napisow
string napis;
int duza; //licznik napisów z dużą pierwsza i ostatnią literą
int a;
int cyfra; // licznik napisów z pierwsza i ostatnią cyfrą
const int d = 4;
int dlugosc; //suma długosci napisów krótszych od d
int ile; //ilość napisów krótszych od d
float srednia;

duza = 0;
cyfra = 0;
ile = 0;
dlugosc = 0;

cout << "Podaj liczbe calkowita, ktora jest dodatnia i mniejsza od 10." << endl;
cin >> N;

if (N < 0 || N > 9)
    {do
        {cout << "Podana liczba nie spelnia kryteriow. Sprobuj jeszcze raz." << endl;
        cin >> N;}
    while (N < 0 || N > 10);}


cout << "Podaj " << N << " napisow." << endl;

for (licznik = 1; licznik < (N + 1); licznik++)
    {cin >> napis;
    a = napis.size();
    if (((napis[a-1] >='A') && (napis[a-1] <= 'Z')) && ((napis[0] >= 'A') && (napis[0] <= 'Z')))
        ++duza;
    if (((napis[a-1] >='0') && (napis[a-1] <= '9')) && ((napis[0] >= '0') && (napis[0] <= '9')))
        ++cyfra;
    if (a < d)
        {++ile;
        dlugosc = dlugosc + a;}
    }


cout << "Podaj jeszcze kilka napisow. Aby zakonczyc wprowadz napis END." << endl;
while (napis != "END")
    {cin >> napis;
    if (napis != "END")
    {a = napis.size();
    if (((napis[a-1] >='A') && (napis[a-1] <= 'Z')) && ((napis[0] >= 'A') && (napis[0] <= 'Z')))
        ++duza;
    if (((napis[a-1] >='0') && (napis[a-1] <= '9')) && ((napis[0] >= '0') && (napis[0] <= '9')))
        ++cyfra;}
    if (a < d)
        {++ile;
        dlugosc = dlugosc + a;}}

cout <<"Liczba wyrazow, ktorych pierwsza i ostatnia litera jest duza: " << duza << endl;
cout <<"Liczba wyrazow, ktorych pierwszy i ostatni znak jest cyfra: " << cyfra<< endl;

if (ile > 0)
{srednia = (float)dlugosc / (float)ile;
    cout <<"Srednia dlugosc wyrazow krotszych niz "<< d << " znakow: " << srednia << endl;}
else
    cout <<"Nie podano zadnych wyrazow krotszych niz " << d << " znaki." << endl;

return 0;
}


