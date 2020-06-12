#include<iostream>
using namespace std;
int op(int q)
{
	int w=q/2;
return w;
}
int oim(int q)
{
	int w=(q*3)+1;
return w;
}
int sel(int q)
{
	if(q%2==0){
		q=op(q);
		cout<<q<<" ";}
	else{
		q=oim(q);
		cout<<q<<" ";}
return q;
}
int main()
{
	int q;
cin>>q;
	if(q>=1&&q<=1000000){
		cout<<q<<" ";
		while(q!=1)
		q=sel(q);}
	else
		return 0;
}
