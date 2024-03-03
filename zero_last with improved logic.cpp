#include<bits/stdc++.h>
using namespace std;
int main()
{
	int array[8]={12,0,0,80,0,0,7,8};
	int n=8,j=0,count=0;
	for(int i=0;i<n;i++)
	{
	   if(array[i]==0)
	   {
	   	count++;
	   	continue;
		   }	
		   else
		   {
		   
		   array[j]=array[i];
		   j++;
	}
	}
	for(int k=1;k<=count;k++)
	{
	array[j]=0;
	j++;
}
	
	cout<<"modified array is ->";
	for(int k=0;k<n;k++)
	cout<<array[k]<<" ";
}
