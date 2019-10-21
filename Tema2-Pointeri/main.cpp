#include <iostream>

using namespace std;

int main()
{
    //Declarați ( fără să inițializați ) patru variabile de tip short, dându-le numele ident1, ident2, identSuma si identProdus.
    short ident1, ident2, identSuma, identProdus;

    //Declarați patru pointeri către short, dându-le aceleaşi nume ca mai sus, prefixate cu prefixul "pnt" (adică pntIdent1 șamd)
    short *pntIdent1; short *pntIdent2; short *pntIdentSuma; short *pntIdentProdus;

    //Atribuiți fiecărui pointer adresa variabilei care îi corespunde
    pntIdent1 = &ident1;
    pntIdent2 = &ident2;
    pntIdentSuma = &identSuma;
    pntIdentProdus = &identProdus;

    //Atribuiți câte o valoare variabilelor ident1 şi ident2 folosind dereferențierea pointerilor corespunzători
    *pntIdent1 = 15;
    *pntIdent2 = 20;

    //Atribuiți variabilei identSuma suma variabilelor ident1 şi ident2, folosind pentru toate 3 dereferențierea pointerilor corespunzători (adică NU scriind  identSuma = ident1 + ident2)
    *pntIdentSuma = *pntIdent1 + *pntIdent2;

    //Atribuiți variabilei identProdus produsul variabilelor ident1 şi ident2, folosind pentru toate 3 dereferențierea pointerilor corespunzători (adică NU scriind  identProdus = ident1 * ident2)
    *pntIdentProdus = *pntIdent1 * *pntIdent2;

    //Tipăriți la consolă variabilele identSuma şi identProdus folosind dereferențierea pointerilor corespunzători
    cout << "identSuma = " << *pntIdentSuma << endl;
    cout << "identProdus = " << *pntIdentProdus << endl;

    return 0;
}
