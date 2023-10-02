#include <iostream>

using namespace std;

int main()
{
    int numero = 42;  // Alkuperäinen muuttuja
    int* osoitin1 = &numero;  // Osoitin alkuperäiseen muuttujaan
    int** tuplapointteri = &osoitin1;  // Tuplapointteri osoittaa osoittimeen

    // Tulostetaan alkuperäinen muuttuja, osoitin ja tuplapointteri
    cout << "Alkuperäinen muuttuja: " << numero << endl;
    cout << "Osoitin1 osoittaa numero muuttujaan ja tähti osoittimen edessä hakee arvon osoitteesta: " << *osoitin1 << endl;
    cout << "Tuplapointteri osoittaa osoitin1:een ja ** tarkoittaa, että ensin haetaan osoitin1:n arvo"<<endl;
    cout << "ja sitten haetaan heti perään tuon arvon osoittamasta paikasta arvo = numero: " << **tuplapointteri << endl;

    int * osoitin2 = new int[5];
    for(int i = 0;i<5;i++)
    {
        osoitin2[i] = i+10;
    }
    tuplapointteri = &osoitin2;
    cout << "mita tama tulostaa ? "<<**tuplapointteri<<endl;
    osoitin2++;
    tuplapointteri = &osoitin2;
    cout << "mita tama tulostaa ? "<<**tuplapointteri<<endl;


    return 0;
}
