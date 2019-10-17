/*Declarați și inițializați următoarele variabile:
O variabilă globală
O variabilă globală statică
O variabilă într-un namespace
Două variabile locale
O variabilă locală statică
Tipăriți la consolă adresele tuturor variabilelor folosind operatorul &

P.S. Pentru a evita complicații inutile la tipărirea adreselor evitați folosirea tipului „char” când declarați variabilele*/
#include <iostream>

double variabila1 = 1.238975; // o variabila globala
static short variabila2 = 150; // o variabila globala statica
namespace NS1
{
    int variabila3 = 10.000; // o variabila intr-un namespace
}

using namespace std;

int main()
{
    float variabila4 = 50.49582; // prima variabila locala
    int variabila5 = 1234; //a doua variabila locala
    static double variabila6 = 1.999985; // o variabila locala statica;

    cout << " Variabila1 are adresa: " << &variabila1 << endl;
    cout << " Variabila2 are adresa: " << &variabila2 << endl;
    using NS1::variabila3;
    cout << " Variabila3 are adresa: " << &variabila3 << endl;
    cout << " Variabila4 are adresa: " << &variabila4 << endl;
    cout << " Variabila5 are adresa: " << &variabila5 << endl;
    cout << " Variabila6 are adresa: " << &variabila6 << endl;
}
