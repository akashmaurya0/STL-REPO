#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	int n;
	cout<<"How many rows you want to print->";
	char data=65;
	cin>>n;
		for(i=1;i<=n;i++)
	{  char data2;
	data2=data;
		for(j=1;j<=i;j++)
		{
			cout<<data2<<" ";
			
		}
		data++;
		cout<<endl;
	}
}
