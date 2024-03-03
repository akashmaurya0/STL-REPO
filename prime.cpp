#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	int n;
	cout<<"enter the bumber to check prime->";
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			break;
		}
	}
	if(i==n)
	{
		cout<<endl<<n<<" is a prime number"<<endl;
	}
	else
	{
		cout<<n<<" is not a prime number";
	}
}
