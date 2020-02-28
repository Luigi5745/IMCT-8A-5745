#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int SP;
	long double ZP;

for(int i=20;i<=60;i+=2){
	SP+=i;
	ZP*=i;
}

cout<<"Suma de los pares: "<<SP<<endl;
cout<<"Producto de los pares: "<<ZP<<endl;
return 0;

}
