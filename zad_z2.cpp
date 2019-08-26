#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
int pierwsza_liczba;
int druga_liczba;
int liczba; // obecnie wpisywana liczba
int poprzednia; // poprzednia podana liczba
int najwieksza; // największa ujemna liczba ciągu
int najmniejsza; // najmniejsza liczba ciągu
int licznik; // licznik liczy ile razy dwie jednakowe liczby wczytano jedna po drugiej

licznik = 0;
cout << "Podaj pierwsza liczbe: " << endl;
cin >> pierwsza_liczba;

najmniejsza = pierwsza_liczba;
najwieksza = pierwsza_liczba;

cout << "Podaj kolejna liczbe: " << endl;
cin >> druga_liczba;

if (druga_liczba < najmniejsza)
    najmniejsza = druga_liczba;

if (((najwieksza >= 0) && (druga_liczba < 0)) || ((najwieksza < 0) && (druga_liczba < 0 ) && (druga_liczba > najwieksza)))
    najwieksza = druga_liczba;


if (druga_liczba == pierwsza_liczba)
    {cout << "Dziekuje, tyle liczb mi wystarczy." << endl;
     cout << "Najmniejsza liczba tego ciagu jest liczba " << pierwsza_liczba << "." << endl;
        if (pierwsza_liczba < 0)
            cout << "Jest ona takze najwieksza liczba ujemna." << endl;
        else
            cout << "W tym ciagu nie ma liczb ujemnych." << endl;
    cout << "Dwie jednakowe liczby obok siebie wpisano raz." << endl;}
else {
        poprzednia = druga_liczba;
    do
        {cout << "Podaj kolejna liczbe: " << endl;
        cin >> liczba;

        if (liczba < najmniejsza)
        najmniejsza = liczba;

        //if ((liczba > najwieksza) && (liczba < 0))
        if (((najwieksza >= 0) && (liczba < 0 )) || (najwieksza < 0 && liczba < 0 && liczba > najwieksza))
            najwieksza = liczba;

        if (liczba == poprzednia)
            ++licznik;

        poprzednia = liczba;
        }
    while (liczba != pierwsza_liczba && liczba != druga_liczba);

    cout << "Dziekuje, tyle liczb mi wystarczy." << endl;
    cout << "Najmniejsza liczba ciagu jest " << najmniejsza << endl;

    if (najwieksza < 0)
        cout << "Najwieksza ujemna liczba ciagu jest " << najwieksza << endl;
    else
        cout << "Ciag nie zawiera ujemnych liczb." << endl;

    cout << "Takie same liczby jedna po drugiej wpisano " << licznik << " razy." << endl;

}


return 0;
}


