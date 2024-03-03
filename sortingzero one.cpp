#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> a={1,1,0,0,1,1,0,0,1,0,0,1,0};
	int i=0,j=a.size()-1;

	while(i<j)
	{
		if(a[i]==1&&a[j]==0)
		{
			swap(a[i],a[j]);
			i++;j--;
		}
			if(a[i]==0&&a[j]==1)
		{i++;j--;}
			if(a[i]==0&&a[j]==0)
		{i++;}
			if(a[i]==1&&a[j]==1)
		{j--;}
	}
	for(auto i:a)
	cout<<i;

}
