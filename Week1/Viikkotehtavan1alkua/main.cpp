#include <iostream>
#include <cstdlib>
#include <ctime>



using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << "RANDMAX = " << RAND_MAX <<endl;
    cout << "Time = "<< time(0) <<endl;
    srand(time(0)); // alustetaan satunnaislukugeneraattori
    int numero;
    for(int i = 0;i<10;i++)
    {
        numero = rand()%20;
        cout<<numero<<endl;
    }
    return 0;
}
