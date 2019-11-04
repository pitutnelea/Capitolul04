#include <iostream>

using namespace std;

enum Tip {struguri, cirese, mere, visine, banane};

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

    Produs produs;
    Produs unTablou[3];
    unTablou = produs;
    unTablou[0] = produs.tipProdus;
    cin>>unTablou[0].tipProdus;
    unTablou[1] = produs.cantitate;
    unTablou[2] = produs.pret;

    for (int i=0; i<3; i++){
        unTablou[i] = produs.tipProdus;
    }



    return 0;
}
