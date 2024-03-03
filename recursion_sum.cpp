#include<iostream>
using namespace std;
int sum(int n);
int main()
{
	int n,sum1=0;
	cout<<"enter the number";
	cin>>n;
	sum1=sum(n);
	cout<<"result is ->"<<sum1;
}
int sum(int n)
{ int sum1=0;
  if(n==1)
  {
  	return 1;
	  }	
	  else
	  {
	    sum1=n+sum(n-1);	
	  }
	  return sum1;
}
