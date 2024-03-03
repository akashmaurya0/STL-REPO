#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n=5;
	
	for(i=1;i<=4;i++)
	{
		for(j=i;j<=7;j++)
		{
		  if(i+j>=5)
		  {
		  	cout<<"*";
		   }	
			else 
			cout<<" ";  
		}
		cout<<endl;
	}
}
