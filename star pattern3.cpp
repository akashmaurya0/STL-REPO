#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	int n,num=1;
	cout<<"How many rows you want to print->";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		  if(i<=j)
		  cout<<num;
		  else
		  cout<<" ";
		}
		num++;
		cout<<endl;
	}
}
