#include "Topla.h"
void Topla::ekle(int kredi,float ortalama)
{
    oTut+=kredi*ortalama;
    tKredi +=kredi;
    
}

void Topla::topla()
{
    aTut=oTut/tKredi;    
}

void Topla::goster()
{
    cout<<"-------------------"<<endl;
    cout<<"Genel Ortalamaniz: "<<aTut<<endl;
    cout<<"-------------------"<<endl;
}

void Topla::sTopla(float c,float T)
{
    ekle(c,T);
    topla();
    goster();    
}