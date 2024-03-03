#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={12,23,22,22,23,12,12};
	vector<int>v;
	
	int size=7,i,j,count,flag=0;
	for(i=0;i<(size-1);i++)
	{
	    for(j=(i+1);j<size;j++)
	    {
	    if(arr[i]==arr[j])
	    {
	    	v.push_back(arr[i]);
	    	flag=1;
	    	break;
		}
		}
		for(auto it:v)
		{
			cout<<" "<<it;
		}
	}
}
