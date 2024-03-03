#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,r;
	stack<int>s;
	cout<<"Enter a decimal number ";
	cin>>n;
	while(n>0)
	{
	   r=n%2;
	   n=n/2;
	   s.push(r); 	
	}
	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}
	
}
