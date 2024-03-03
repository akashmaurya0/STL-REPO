#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	int n;
	cout<<"How many rows you want to print->";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
