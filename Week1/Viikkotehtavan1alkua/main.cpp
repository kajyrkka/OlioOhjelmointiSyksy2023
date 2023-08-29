#include <iostream>
#include <cstdlib>
#include <ctime>



using namespace std;

int main()
{

    cout << "RANDMAX = " << RAND_MAX <<endl;
    cout << "Time = "<< time(0) <<endl;
    srand(time(0)); // alustetaan satunnaislukugeneraattori

    int satunnainenLuku = rand()%20;
    int kayttajanNumero = -1;

    while(kayttajanNumero != satunnainenLuku)
    {
       cout<<"Arvaa luku 0-19 valilta"<< endl;
       cin>>kayttajanNumero;

       cout<<"Annoit numeron = "<< kayttajanNumero<<endl;
    }


    return 0;
}
