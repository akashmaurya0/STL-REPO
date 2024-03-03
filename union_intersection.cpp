#include<bits/stdc++.h>
using namespace std;
int  present(vector<int> vu,int a);
int main()
{
	int a[]={1,2,3,4,5};
	int b[]={4,5,6,7};
	int i,j,sizea=5,sizeb=4;
	vector<int> vi;
		vector<int> vu={a[0]};
	for(i=0;i<sizea;i++)
	{    
	  if(!present(vu,a[i]))
	  {
	  	vu.push_back(a[i]);
	  }
	
	
	
		for(j=0;j<sizeb;j++)
		{
			if(!present(vu,b[j]))
	  {
	  	vu.push_back(b[j]);
	  }
			
			if(a[i]==b[j])
			{
				vi.push_back(a[i]);
				break;
			}
		}
	}
	cout<<" common values of both the array a and b is ->";
	for(auto i:vi)
	{
		cout<<" "<<i;
	}
	cout<<endl<<" union of both the array a and b is ->";
	sort(vu.begin(),vu.end());
	for(auto i:vu)
	{
		cout<<" "<<i;
	}
	
}

int  present(vector<int> vu,int a)
{  int flag=0;
	for(auto i:vu)
	{
		if(i==a)
		{
		  flag=1;
		  break;	
		}
	}
	return flag;
}
