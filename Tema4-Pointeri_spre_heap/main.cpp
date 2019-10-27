#include <iostream>

using namespace std;

//Declarați un pointer de tip double în zona globală/statică și inițializați-l cu adresa unui bloc de memorie de pe heap, bloc în care puneți valoarea 1.3
double *pointer1 = new double(1.3);

int main()
{
    //Declarați doi pointeri locali de tip double (adică pe stack) și inițializați-i cu adresele a două blocuri de memorie de pe heap, blocuri în care puneți valorile 2.3 respectiv 5.4
    double *pointer2 = new double(2.3);
    double *pointer3 = new double(5.4);

    //Mai declarați pointerul local de tip double pntMedie și inițializați-i cu adresa unui bloc de memorie de pe heap, bloc în care nu puneți nimic.
    double *pntMedie = pointer1;

    //Folosind dereferențierea calculați media aritmetică a valorilor din primele trei blocuri de memorie și puneți rezultatul în al patrulea bloc de memorie, cel gestionat de pntMedie.
    *pntMedie = (*pointer1 + *pointer2 + *pointer3)/3;

    //Tipăriți la consolă conținutul celui de-al patrulea bloc de memorie.
    cout<<*pntMedie<<endl;

    delete pointer1;
    pointer1 = NULL;

    delete pointer2;
    pointer2 = NULL;

    delete pointer3;
    pointer3 = NULL;

    return 0;
}
