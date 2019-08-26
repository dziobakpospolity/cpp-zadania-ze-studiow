#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <fstream>


using namespace std;

struct SDane
{
  string imie, nazwisko;
  int wiek;
  SDane *nast;
};

void wstaw(SDane *adres, string im, string nz, int wk)
{
	SDane *nowy = NULL;
	nowy = new SDane();
	nowy->imie = im;
	nowy->nazwisko = nz;
	nowy->wiek = wk;
	nowy->nast = NULL;

	element_listy *ost = adres;

	if (adres == NULL)
	{
		adres = nowy;
		return;
	}

	while (ost->nast != NULL) {
		ost = ost->nast;
	}
	ost->nast = nowy;
	return;
}

void drukuj(SDane *adres)
{
  if (!adres) // to to samo co: if (adres == NULL)
    return;
  cout << "Imie: " << adres->imie << endl;
  cout << "Nazwisko: " << adres->nazwisko << endl;
  cout << "Wiek: " << adres->wiek << endl;
  cout << endl;
  drukuj(adres->nast);
}

 void kasuj(SDane *adres)
 {
 SDane *temp;
  while (adres != NULL)
  {
    temp=adres;
    adres=adres->nast;
    delete temp;
  }
  }

int main ()
{
    SDane  *glowa , *aktualny, *poprzedni, *nowy;
  int n, wiek, i;
  string imie, nazwisko;
  ifstream plk_we;


/* //Podpunkt 1

  glowa = NULL;
  cout << "Ilu osob dane chcesz podac? Podaj liczbe.\n";
  cin >> n;
if (n<1)
{while (n<1)
    {cout << "Zeby utworzyc liste liczba osob nie moze byc mniejsza od 1. Podaj liczbe jeszcze raz." << endl;
    cin >> n;}}

  cout << "Wprowadz dane " << n << " osob.\n\n";

  i = n;
  aktualny = NULL;
  poprzedni = NULL;
  glowa = poprzedni;
   while (i!=0)
 {i--;
  cout << "Imie:";
  cin >> imie;
  cout << "Nazwisko:";
  cin >> nazwisko;
  cout << "Wiek:";
  cin >> wiek;
  cout <<  endl;

  wstaw(glowa, imie, nazwisko, wiek)
   poprzedni = aktualny;
   aktualny = new SDane;
   aktualny->imie = imie;
   aktualny->nazwisko = nazwisko;
   aktualny->wiek = wiek;
   aktualny->nast = NULL;

   if (poprzedni != NULL)
     poprzedni->nast = aktualny;
   else
     glowa = aktualny;};

//Podpunkt 2
    cout << "Wczytana lista: "<< endl;
    drukuj(glowa);

//Podpunkt 3
cout << "Usuwam z listy wszystkie osoby o wieku wiekszym niz wiek osoby drugiej od konca." << endl;

int w;

if (n>1)
{aktualny = glowa;
    while (aktualny->nast!= NULL)
    {w = aktualny->wiek;
     aktualny = aktualny->nast;}}
else
    cout << "Lista jest zbyt krotka by wykonac polecenie." << endl;


if (n>1)
    {aktualny=glowa;
     poprzedni= NULL;
    while (aktualny!=NULL)
    { if (aktualny->wiek > w)
    {cout << "Podaj nowe dane do wstawienia na miejsce usunietej z listy osoby." << endl;
    cout << "Imie:";
    cin >> imie;
    cout << "Nazwisko:";
    cin >> nazwisko;
    cout << "Wiek:";
    cin >> wiek;
    cout <<  endl;
    nowy = new SDane;
    nowy->imie = imie;
    nowy->nazwisko = nazwisko;
    nowy->wiek = wiek;

        if (aktualny == glowa)
      {
        aktualny = aktualny->nast;
        delete glowa;
        glowa = aktualny;

        nowy->nast = aktualny;
        aktualny = nowy;

      }
      else
      {
        poprzedni->nast = aktualny->nast;
        delete aktualny;
        aktualny = poprzedni->nast;

        nowy->nast = aktualny;
        poprzedni->nast = nowy;
        aktualny = nowy;}

       }

    poprzedni = aktualny;
    aktualny = aktualny->nast;

    }}



//Podpunkt 4
if (n>1)
    {cout << "Wczytana lista po zmianach: "<< endl;
    drukuj(glowa);}

//Podpunkt 5
kasuj (glowa); */


return 0;
}


