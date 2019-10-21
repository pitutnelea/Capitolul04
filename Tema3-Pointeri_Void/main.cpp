#include <iostream>

using namespace std;

int main()
{
    //Declarați o variabilă de tip int
    unsigned int var1;

    //Declarați un pointer void și inițializați-l cu adresa variabilei de mai sus
    void *pointerNou = &var1;

    //Atribuiți o valoare variabilei prin intermediul pointerului. E nevoie să folosiți operatorul static_cast pentru conversia explicită, respectiv dereferențierea
    *static_cast<unsigned int*>(pointerNou)=25;

    //Tipăriți de 2 ori variabila la consolă, o dată în mod direct și a doua oară prin intermediul pointerului void.

    cout << "Tiparire in mod direct: " << var1 << endl;
    cout << "Prin cast si dereferentiere: " << *static_cast<unsigned int*>(pointerNou)<<endl;

    return 0;
}
