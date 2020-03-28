#include <iostream>
//random seed
#include <cstdlib>
#include <ctime>
using namespace std;
const int A1=12;
const int A2=10;
const int pr=19;
int cos_f=0;
int m = 0;

int main(){

    srand(time(NULL));
    int lim_inf = 50;
    int lim_sup = 150;

    for (int i=0;i<2000;i++)
    {   
        int velocidad = lim_inf + rand()%(lim_sup + 1 - lim_inf);
        m++;
        if (velocidad>100)
            cos_f=cos_f+(A1*pr);
        else
            cos_f=cos_f+(A2*pr);
        cout<<"costo del combustible en el minuto "<<m<<" es "<<cos_f<<endl;
    }
    cout<<"costo final del combustible es "<<cos_f<<endl;
    return 0;
}