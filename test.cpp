#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,i,r,sum=0,k=0;
 stack<int> s;
 vector<int>v;
 vector<int>v1;
 cout<<"enter a number";
 cin>>n;
 while(n!=0)
 {
 	r=n%2;
 	n=n/2;
 	s.push(r);
 }
 while(!s.empty())
 {
 	int t=s.top();
 	s.pop();
 	v.push_back(t);
 	cout<<t;
 	
 }
 cout<<endl;
 for(auto i:v)
 {
 	cout<<i;
 	if(i==0)
 	v1.push_back(1);
 	else
 	v1.push_back(0);
 	
 }
 cout<<endl<<"vector ka size is ->"<<v.size()<<endl;
 
 for(auto n:v1)
 {
 	cout<<n;
 }
 cout<<endl;
for(int j=v1.size()-1;j>=0;j--)
{
	if(v1[j]==1)
	{
	  sum=sum+pow(2,k);
	  k=0;	
	}
	else
	{
	  sum=sum;
	  k++;	
	}
}
cout<<"\nsum"<<sum;
 
}

