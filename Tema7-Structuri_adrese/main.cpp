#include <iostream>

using namespace std;

struct Adresa{
    char prenume[30];
    char strada[30];
    char oras[30];
    char judet[30];
    unsigned int numar;
    unsigned int codPostal;
    };

int main()
{
    //1.Definiți, în zona globală, o structură care să permită modelarea unei adrese. Ea trebuie să conțină următoarele câmpuri:
    //a)prenumele, strada, orașul și județul ca șiruri de caractere
    //b)numărul și codul poștal ca întregi
    //2.În funcția main declarați o variabilă de tipul structurii definite mai sus.
    //3.Citiți de la consolă fiecare membru al variabilei.
    //4.Tipăriți un text similar celui din imaginea anexată mai jos, unde în loc de „____” să apară valorile membrilor variabilei de mai sus.

    Adresa adresa;
    cout<<"Introdu prenumele: "<<endl;
    cin>>adresa.prenume;

    cout<<"Introdu strada: "<<endl;
    cin>>adresa.strada;

    cout<<"Introdu orasul: "<<endl;
    cin>>adresa.oras;

    cout<<"Introdu judetul: "<<endl;
    cin>>adresa.judet;

    cout<<"Introdu numarul: "<<endl;
    cin>>adresa.numar;

    cout<<"Introdu codul postal: "<< endl;
    cin>>adresa.codPostal;

    cout<<"Ma numesc "<<adresa.prenume<<endl;
    cout<<"M-am nascut in judetul "<<adresa.judet<<", orasul "<<adresa.oras<<", pe strada "<<adresa.strada<<",la numarul "<<adresa.numar<<" si codul postal este:"<<adresa.codPostal<<endl;

    return 0;
}
