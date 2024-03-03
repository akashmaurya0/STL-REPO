#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum=0,r,k=0,i;
	string s;
	cout<<"enter a binary number";
	cin>>s;
	int n=s.size();
	
	for(i=n-1;i>=0;i--)
	{
		if(s[i]=='0')
		{
		  sum=sum;
		  	k++;
		}
		else
		{
		sum=sum+pow(2,k);
			k++;
		}
	}
	cout<<endl<<sum;
}
