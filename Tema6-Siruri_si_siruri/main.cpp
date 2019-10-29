#include <iostream>

using namespace std;

int main()
{
    //1.Declarați șirul sirStack pe stack, fără dimensiune explicită și inițializați-l cu un text la alegere.
    char sirStack[] = "pitut nelea";

    //2.Declarați șirul sirHeap pe heap, dându-i ca dimensiune dimensiunea șirului sirStack. Notă: faceți acest lucru fără să numărați câte caractere ați introdus în textul de la punctul 1 !
    char *sirHeap = new char[sizeof(sirStack)];

    //3.Copiați conținutul șirului sirStack în șirul șirHeap.
    for (int i = 0; i<sizeof(sirStack); i++){
    sirHeap[i] = sirStack[i];
    }

    //4.Afișați la consolă șirul sirHeap.
    cout<< "Sirul sirHeap este:"<<sirHeap << endl;

    //5.Determinați câte cuvinte are textul introdus la punctul 1 și afișați rezultatul.
    cout<< "sirStack are lungimea de " << sizeof(sirStack)<<" caractere." << endl;

    delete sirHeap;
    sirHeap = NULL;

    return 0;
}
