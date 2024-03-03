#include<bits/stdc++.h>
using namespace std;
int main()
{
	int array[5]={3,5,1,2,4};
	int n=5,count=0;
	for(int i=1;i<n;i++)
	{
		if(array[i-1]>array[i])
		{
			count++;
		}
	}
	if(array[n-1]>array[0])
	{
		count++;
	}
	
	if(count<=1)
	{
		cout<<"True";
	}
	else cout<<"false";

}

