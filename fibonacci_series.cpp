#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=0,b=1,c;
	int n,i;
	cout<<"How many numbers you want to print->";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<c<<" ";
	}
}
