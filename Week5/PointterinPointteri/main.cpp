#include <iostream>

using namespace std;

int main()
{

    while(1)
    {

    int a = 5;
    volatile int *p1 = &a;           // Osoitin kokonaislukuun
    volatile int **p2 = &p1;         // Osoitin osoittimeen kokonaislukuun
                            // p **p2 osoittaa nyt osoittimeen p1, joka osoittaa kokonaislukuun a

    cout << *p2<<endl;    // Tulostaa 5:n muistiosoiteen
    cout << **p2<<endl;   // Tulostaa 5, koska **p2 palauttaa a:n arvon
    }


    return 0;
}
