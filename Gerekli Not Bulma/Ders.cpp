    #include <iostream>
    using namespace std;
    #include "Ders.h"
    
    Ders::Ders(int Vize, int Yuzde)
    {
        vize=Vize;
        yuzde=Yuzde;
        hesapla(vize,yuzde);
    }

    void Ders::hesapla(int vize,int yuzde)
    {
        tut=(vize*yuzde);
        tut/=100;

        cout<<"--------------------"<<endl;
        cout<<"Vizeden Gelen Puan: "<<tut<<endl;
        cout<<"--------------------"<<endl;

        gNot=(50-tut)*100;
        gNot/=(100-yuzde);

        cout<<"Gereken Puan: "<<gNot<<endl;
        cout<<"--------------------"<<endl;

    }