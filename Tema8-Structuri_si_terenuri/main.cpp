#include <iostream>

using namespace std;

enum TipTeren{agricol, pasune, livada, viran};

struct Suprafata{
float _lung;
float _lat;
};

struct Teren{
long long _cnpProprietar;
TipTeren _tipTeren;
Suprafata _suprafata;
float _arie;
};



int main()
{
    /*Definiți structura Suprafata care să conțină doi membri, _lung și _lat, de tip float
    Definiți structura Teren care să conțină membrii:
    _cnpProprietar de tip long long
    _tipTeren de tip enum TipTeren. Definiți respectivul enum cu variantele: agricol, pasune, livada și viran
    _suprafata de tip Suprafata
    _arie de tip float
    În funcția main declarați pe stack variabila unTeren de tip Teren.
    Atribuiți valori membrilor _lung și _lat din membrul _suprafata al variabilei unTeren.
    Atribuiți valori celorlalți membrii al variabilei unTeren, cu excepția membrului _arie.
    Membrului _arie atribuiți-i ca valoare produsul membrilor _lung și _lat ai membrului _suprafață
    Tot în funcția main declarați pe heap variabila oMovila.
    Copiați în membrii variabilei oMovila valorile membrilor echivalenți ai variabilei unTeren,
    Tipăriți la consolă toți membrii variabilei oMovila
    Eliberați spațiul ocupat de oMovila :)*/

    Teren unTeren;
    unTeren._suprafata._lung = 1000;
    unTeren._suprafata._lat = 2000;
    unTeren._cnpProprietar = 1234567891234;
    unTeren._tipTeren = livada;
    unTeren._arie = unTeren._suprafata._lung * unTeren._suprafata._lat;

    Teren *oMovila = new Teren;
    oMovila->_suprafata._lung = unTeren._suprafata._lung;
    oMovila->_suprafata._lat = unTeren._suprafata._lat;
    oMovila->_cnpProprietar = unTeren._cnpProprietar;
    oMovila->_tipTeren = unTeren._tipTeren;
    oMovila->_arie = unTeren._arie;

    cout<<"Suprafata lung = "<<oMovila->_suprafata._lung<<endl;
    cout<<"Suprafata lat = "<<oMovila->_suprafata._lat<<endl;
    cout<<"CNP Proprietar = "<<oMovila->_cnpProprietar<<endl;
    //cout<<"Tip teren = "<<oMovila->_tipTeren<<endl;

    TipTeren i = viran;
    //char *enum_to_string[i];
    {
        switch(i)
        {
            case agricol:cout<<"Tip teren = agricol"<<endl;break;
            case pasune:cout<<"Tip teren = pasune"<<endl;break;
            case livada:cout<<"Tip teren = livada"<<endl;break;
            case viran:cout<<"Tip teren = viran"<<endl;break;
            default: cout<<"Eroare: teren invalid"<<endl;
        }
    }
    cout<<"Arie = "<<oMovila->_arie<<endl;

    delete oMovila;
    oMovila = NULL;

    return 0;
}
