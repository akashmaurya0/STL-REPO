#include<iostream>
using namespace std;
int main()
{
	int a[10]={1,4,6,6,7,8,5,69,4,8};
	int n=10,i,j,max;
	max=a[0]+a[1];
	for(i=0;i<(n-1);i++)
	
	{
		for(j=1;j<n;j++)
		{
			if(i==j)
			{
				continue;
			}
			else if(max<(a[i]+a[j]))
		  {
		  	max=(a[i]+a[j]);
			  }	
		}
	}
  cout<<" max pair sum is ->"<<max;
}
