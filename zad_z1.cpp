#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
string imie;
char plec;
int a,b;
float w,c;


cout << "Podaj swoje imie" << endl;
cin >> imie ;

cout << "Podaj swoja plec - wpisz m lub k."<< endl;
cin >> plec;

    {
        if ((plec=='m') || (plec=='M'))
        cout << imie << ", witam Pana." << endl;
    else if ((plec=='k') || (plec=='K'))
        cout << imie << ", witam Pania." << endl;
    else
        cout << "Witaj, " << imie << endl;
        }

{cout << "Podaj pierwsza dowolna liczbe calkowita: " << endl;
cin >> a;}

{cout << "Podaj druga dowolna liczbe calkowita: " << endl;
cin >> b;}

    if (a==b)
    {{
        cout << "Podane liczby sa rowne." << endl;
        if (a%2==0)
            cout << "Sa to liczby parzyste." << endl;
        else
            cout << "Sa to liczby nieparzyste." << endl;}
        {
        if ( a >99 || a <-99)
                cout << "Sa to liczby inne ni¿ jedno- lub dwucyfrowe."<<endl;
        else if (a >9 || a <-9)
                cout << "Sa to liczby 2 cyfrowe."<<endl;
        else
                cout << "Sa to liczba 1 cyfrowe."<<endl;
        }}
    else if (a>b)
        {{
            cout << "Liczba " << a << " jest wieksza." << endl;
        if (a%2==0)
            cout << "Jest to liczba parzysta." << endl;
        else
            cout << "Jest to liczba nieparzysta." << endl;}
            {
        if ( a >99 || a <-99)
                cout << "Jest to liczba inna niz jedno- lub dwucyfrowa."<<endl;
        else if (a >9 || a <-9)
                cout << "Jest to liczba 2 cyfrowa."<<endl;
        else
                cout << "Jest to liczba 1 cyfrowa."<<endl;
        }}
    else
        {{
            cout << "Liczba " << b << " jest wieksza" << endl;
        if (b%2==0)
            cout << "Jest to liczba parzysta." << endl;
        else
            cout << "Jest to liczba nieparzysta." << endl;}
            {
        if ( b >99 || b <-99)
                cout << "Jest to liczba inna niz jedno- lub dwucyfrowa."<<endl;
        else if (b >9 || b <-9)
                cout << "Jest to liczba 2 cyfrowa."<<endl;
        else
                cout << "Jest to liczba 1 cyfrowa."<<endl;
        }}

cout << "Wynik dzielenia liczby " << a << " przez podwojona wartosc liczby " << b << ":" << endl;

if (b==0)
    cout << "Blad! Nie mozna podzielic przez zero!" << endl;
else

      {c=(2*b);
       w = (a/c);
       cout << w << endl;}

return 0;
}


