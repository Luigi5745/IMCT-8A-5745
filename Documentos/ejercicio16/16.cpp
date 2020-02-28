#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	srand(time(NULL));
	int lim_inf =-50;
	int lim_sup =60;
	int q=0;
	int w=0;
	int e=0;

for(int i=0;i<100;i++){
	int valor =lim_inf + rand()%(lim_sup + 1 - lim_inf);
	cout<<valor<<endl;

	if(valor<15)
	 q+=1;

	if(valor>50)
	w+=1;

	if(valor>25 && valor<45)
	e+=1;
	
}
     int valor=rand()%100;	

cout<<"Menores de 15: "<<q<<endl;
cout<<"Mayores de 50: "<<w<<endl;
cout<<"Comprendidos entre 25 y 45: "<<e<<endl;
return 0;
} 
