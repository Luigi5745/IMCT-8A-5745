#include <iostream>
using namespace std;
int A=0;
int B=0;
int resultado=0;

int main(){
    cout<<"Insertar valor de A"; cin>>A;
    cout<<"Insertar valor de B"; cin>>B;
    resultado=((A+B)+(A-B)+(B+A)+(B-A));
    cout<<"\n El resultado es:"<<resultado<<endl;
    return 0;
}