#include <iostream>
#include <string>
using namespace std;
long* obt_a(long n){
long* x=new long[n];
for(int i=0;i<n;i++)
cin>>x[i];
return x;
}
long* obt_b(int m){
long* z=new long[m];
for(int i=0;i<m;i++)
cin>>z[i];
return z;
}
int obt_r(long* x,long* z,long n,int m,long c){
int r=0;
for(int i=0;i<m;i++){
for(long j=0;j<n;j++){
if((x[j]<=(z[i]+c))&&(x[j]>=(z[i]-c))){
r+=1;z[i]=0;}
}}
return r;
}
int main(){
int m;
long n,c;
cin>>n>>m>>c;
long* x=new long[n];
long* z=new long[m];
if(n>=1&&m<=200000&&(0<=c<=1000000000)){
x=obt_a(n);
z=obt_b(m);
int r=obt_r(x,z,n,m,c);
cout<<r<<endl;
}
return 0;
}
