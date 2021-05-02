#include "Not.h"
void Not::Donus(string s)
{
    if(s=="AA") dOrt=4.0;

    else if(s=="BA") dOrt=3.5;

    else if(s=="BB") dOrt=3.25;
    
    else if(s=="CB") dOrt=3.0;

    else if(s=="CC") dOrt=2.5;

    else if(s=="DC") dOrt=2.25;

    else if(s=="DD") dOrt=2.0;

    else if(s=="FD") dOrt=1.5;

    else if(s=="FF") dOrt=0.0;
}

void Not::Goster()
{
    cout<<"********************"<<endl;
    cout<<"Girilen Bilgiler: "<<endl;
    cout<<"Dersin Adi: "<<dAdi<<endl;
    cout<<"Dersin Kredisi: "<<kredi<<endl;
    cout<<"Dersin Ortalamasi: "<<dOrt<<endl;
    cout<<"********************"<<endl;

}
Not::Not(string isim,string hNotu,int k)
{
    dAdi=isim;

    Donus(hNotu);

    kredi=k;
    Goster();
}
