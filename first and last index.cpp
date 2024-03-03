#include<bits/stdc++.h>
using namespace std;
int main()
{   int i=0,j=7,n,flag=0;
	int array[8]={1,2,3,3,1,3,5,2};
	cout<<" given array is ->";
	for(int k=0;k<8;k++)
	cout<<array[k]<<" ";
	cout<<"enter the number you want to search";
	cin>>n;
	while(i<=j)
	{
		if(array[i]==n)
		{
			cout<<"first index is ->"<<i<<endl;
			flag=1;
		    break;
		}
		else
		i++;
		if(array[j]==n)
		{
			cout<<"last index is ->"<<j<<endl;
		  flag=1;
		  break;
		}
		else
		j--;
	}
	if(flag==0)
	cout<<-1<<" "<<-1;
	
}
