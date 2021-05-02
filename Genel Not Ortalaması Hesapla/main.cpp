#include "Not.cpp"
#include "Topla.cpp"

int main()
{
    Topla T;

    Not Mobil("Mobil Programlama","BB",3);
    Not Py("Python Veri","AA",3);

    Not Dersler[] = {
        Mobil,
        Py
    };

    for(Not n:Dersler)
    {
        T.sTopla(n.kredi,n.dOrt);
    }

    return 0;
}
