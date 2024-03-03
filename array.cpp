#include<bits/stdc++.h>
using namespace std;
int present(int a,vector<int>v);
int main()
{
	array<int,10> a={12,12,34,34,57,49,56,12,56,49};
	int i;
	vector<int> v;
	vector<int> v1;
	v.push_back(a[0]);
	for(i=1;i<8;i++)
	{
	   if(!present(a[i],v))
	   {
	   	
	   	v.push_back(a[i]);
	    }	
	    if(present(a[i],v))
	   {
	   	
	   	v1.push_back(a[i]);
	    }	
	    
	}
	cout<<"data->";
	for(auto i:v)
	{
		cout<<" "<<i;
    }
    cout<<"\n duplicate value is ->";
    	for(auto i:v1)
	{
		cout<<" "<<i;
    }
}
int present(int a,vector<int>v)
{ int flag=0;
	for(auto i:v)
	{
	  if(i==a)
	  flag=1;
	  	
	}
	return flag;
}
