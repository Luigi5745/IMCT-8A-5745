#include <iostream>
using namespace std;
int main(){
int P=0;
int Im=0;
int I=0;
for(int i=1; i<=200; i++){

	if (i%2==0){
	P+=i;
	}
	else{
	I+=i;
	}
}

cout<<"La suma de los pares es: "<<P<<endl;
cout<<"La suma de los impares es: "<<Im<<endl;

return 0;

}
