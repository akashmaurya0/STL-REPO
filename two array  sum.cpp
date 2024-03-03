#include<bits/stdc++.h>
using namespace std;
int main()
{
	int array1[5]={3,5,1,2,4};
	int array2[3]={3,5,1};
	int n1=5,n2=3,sum1=0,sum2=0,total_sum=0;
	for(int i=0;i<n1;i++)
	{
		sum1=(sum1*10)+array1[i];
	}
	for(int i=0;i<n2;i++)
	{
		sum2=(sum2*10)+array2[i];
	}
	total_sum=sum1+sum2;
	cout<<"total sum is ->"<<total_sum;
}
