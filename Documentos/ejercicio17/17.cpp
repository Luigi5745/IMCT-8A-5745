#include <iostream>
using namespace std;

int n1 = 0;
int n2 = 0;
int suma = 0;

void registro (){
    cin>>n1;
return;
}

void ciclo (){
    for (int i = 0; i < 10; i++)
    {
        registro();
        if (n1 > n2)
        {
            n2 = n1;
            suma = n2 + suma;
        }
        else
        {
            cout<<"La suma no se podrá hacer porque los números no están ordenados"<<endl;
            return;
        }        
    }
return;    
}

int main(){
    cout<<"Ingrese 10 números enteros"<<endl;
    ciclo();
    cout<<"La suma de sus números es: "<<suma<<endl;
return 0;
}
