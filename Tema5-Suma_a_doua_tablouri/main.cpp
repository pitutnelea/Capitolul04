#include <iostream>

using namespace std;

//Declarați un al treilea array, tot de 41 de elemente de tip short, în zona globală/statică (arraySuma).
short arraySuma[41];

int main()
{
    //Declarați două array-uri de câte 41 de elemente de tip short fiecare, unul pe stack (arrayStack) și celălalt pe heap (arrayHeap).
    short arrayStack[41];
    short *arrayHeap = new short[41];

    //Inițializați-le (folosind o instrucțiune iterativă) cu valorile:
      //0, 7, 14, 21, ... , 280 pentru primul array, arrayStack
      //0, 8, 16, 24, ... , 320 pentru al doilea array, arrayHeap
    for (int i = 0; i<41; ++i){
        arrayStack[i] = i * 7;
        arrayHeap[i] = i * 8;
        cout << "arrayStack["<<i<<"]="<< arrayStack[i]<< "\tarrayHeap["<<i<<"]="<<arrayHeap[i]<<endl;
    }

    //Inițializați elementele celui de-al treilea array ca fiind suma elementelor corespunzătoare din primele două array-uri ( arraySuma[i] = arrayStack[i] + arrayHeap[i] ).
    //Tipăriți la consolă cel de-al treilea array.
    for (int i = 0; i < 41; ++i){
        arraySuma[i] = arrayStack[i] + arrayHeap[i];
        cout<<"arraySuma["<<i<<"]="<< arraySuma[i]<< endl;
    }

    //Ar mai fi ceva de făcut. Vă las pe voi să vă dați seama ce.
    delete[] arrayHeap;
    arrayHeap = NULL;

    return 0;
}
