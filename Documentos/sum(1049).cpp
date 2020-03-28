#include <iostream>
using namespace std;

int n;
int r;

void getres()
{
   do
   {
    r=r+n;
    n--; 
   } 
   while (n>0);
   
}

int main()
{
    cin>>n;
    getres();
    cout<<r<<endl;
    
}