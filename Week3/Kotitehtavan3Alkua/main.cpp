#include <iostream>
#include "cfhef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Cfhef kokki("Gordon Ramsay");
    kokki.makeSalad();
    kokki.makeSoup();


    ItalianChef kokki2("Valimaki");
    kokki2.makePasta();

    return 0;
}
