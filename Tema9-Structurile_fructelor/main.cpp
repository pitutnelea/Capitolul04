#include <iostream>

using namespace std;

enum Tip {struguri=1, cirese, mere, visine, banane};

struct Produs{
    Tip tipProdus;
    float cantitate;
    float pret;
};

int main()
{
    //Definiți enum-ul Tip care să conțină 4 - 5 identificatori, fructe.
    //Definiți structura Produs care să conțină membrii
        //1. tipProdus de tip ... Tip :)
        //2. cantitate de tip float
        //3. pret de tip float
    //În funcția main definiți un tablou cu trei elemente de tip Produs.
    //Într-un for parcurgeți elementele tabloului. Pentru fiecare element citiți de la tastatură câte o valoare pentru fiecare din membrii săi (tipProdus, cantitate și pret).
    //Atenție ! Nu veți putea pune direct de la tastatură o valoare în membrul tipProdus, pentru că e de tip Tip, care e un enum. E nevoie să salvați ceea ce citiți de la tastatură într-o variabilă temporară și apoi să copiați valoarea acelei variabile în tipProdus folosind static_cast.
    //Odată încheiată citirea afișați situația stocului parcurgând din nou tabloul. De asemenea calculați și afișați valoarea totală a stocului. Găsiți un exemplu de afișaj în fișierul anexat.

    Produs unTablou[3];
    short varCitireTastatura, varTemp;
    for (int i=0; i<3;i++){
        cout<<"Introduceti tipul (1-struguri, 2-cirese, 3-mere, 4-visine, 5-banane): ";
        cin>>varCitireTastatura;
        varTemp = varCitireTastatura;
        unTablou[i].tipProdus = static_cast<Tip>(varTemp);

        cout<<"Introduceti cantitatea: ";
        cin>>unTablou[i].cantitate;

        cout<<"Introduceti pretul: ";
        cin>>unTablou[i].pret;
    }

    for (int j=0;j<1;j++)
    {
        cout<<"Produs"<<"\t\tCant"<<"\tPret"<<endl;
        for (int i=0;i<3;i++)
        {
            switch(unTablou[i].tipProdus)
            {
            case struguri: cout<<"Struguri";break;
            case cirese: cout<<"Cirese"<<"\t";break;
            case mere: cout<<"Mere"<<"\t";break;
            case visine: cout<<"Visine"<<"\t";break;
            case banane: cout<<"Banane"<<"\t";break;
            default: cout<<"Atentie, produs invalid!"<<endl;
            }
            cout<<"\t"<<unTablou[i].cantitate<<"\t"<<unTablou[i].pret<<endl;
        }
    }

    int stoc = 0;
    for (int i =0;i<3;i++){
        stoc = stoc + (unTablou[i].cantitate * unTablou[i].pret);
    }

    cout<< "Valoare stoc: "<< stoc<< endl;

    return 0;
}
