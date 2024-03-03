#include<iostream>
using namespace std;
int main()
{
	int array[10],sum=0;
	cout<<" enter 10 integers";
	for(int i=0;i<10;i++)
	{
		cin>>array[i];
		sum=sum+array[i];
	}
	 cout<<" sum of all element is ->"<<sum;
}
