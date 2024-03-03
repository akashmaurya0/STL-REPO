#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int arr[]={1,3,4,7};
	for(i=0;i<4;i++)
	{
		for(j=i;j<4;j++)
		{
			int sum=0;
			for(k=i;k<=j;k++)
			{
			
		cout<<arr[k]<<" ";
			sum=sum+arr[k];
		
		}
		if(sum==5)
		cout<<"yes";
			cout<<endl;
		}
		
	}
}
