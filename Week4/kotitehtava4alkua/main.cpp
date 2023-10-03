#include "asunto.h"

int main()
{
    Asunto olio;
    olio.maarita(2,100);
    //olio.laskeKulutus(1);

    cout<<"asunnon kulutus, kun hinta = 1 on"<<olio.laskeKulutus(1,false)<<endl;
    return 0;
}
