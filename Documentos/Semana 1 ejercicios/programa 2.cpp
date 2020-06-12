#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
int a,s,d,k,j,l;
int con=0;
int e[100];

int main()
{
	for ( d = 0; d <a - 3; d++) 
{ 
    for ( j = d + 1; j <=a - 2; j++) 
    {           
        for ( k = j + 1; k <=a - 1; k++) 
        {
            for ( l = k + 1; l < a; l++) 
	if (e[d] + e[j] + e[k] + e[l] == s)
            if(con ==0 ){
                cout << d+1<<", " << j+1  
                     << ", " << k+1 << ", " << l+1<<endl;
                     con+=+1;
			}
		}
	}  
} 
	int a=sizeof(e) / sizeof(e[0]);
{
	cin>>a>>s;
	for(d=1;d<=a;d++)
	{
		cin>>e[d];
}
}
	if(con==0)
	{
		cout<<"\n imposible";
	}
	return 0;
}
