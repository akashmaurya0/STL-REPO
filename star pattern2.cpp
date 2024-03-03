#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	int n;
	cout<<"How many rows you want to print->";
	cin>>n;
	char data=68;
	for(i=1;i<=n;i++)
	{  char data2=data;
		for(j=i;j>=1;j--)
		{
		  cout<<data2<<" ";
		  data2++;
		}
		data--;
		cout<<endl;
	}
}
