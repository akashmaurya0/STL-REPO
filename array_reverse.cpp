#include<iostream>
using namespace std;
int main()
{
	int a[]={12,38,74,82,45,67};
	int n=6,i;
	for(i=0;i<(n/2);i++)
	{
	   swap(a[i],a[n-i-1]);	
	}
	for(int j=0;j<n;j++)
	{
		cout<<" "<<a[j];
	}
}
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
