#include<iostream>
using namespace std;
int power(int n,int p);
int main()
{ 
int n,p,result;
cout<<"enter the number and the power   ";
cin>>n>>p;
if(p<0)
{
	cout<<"power must be greater than 0";
	return 0;
}
result=power(n,p);

cout<<result;
}
int power(int n,int p)
{
	int result=1;
	if(p==0)
		return 1;
       return n*power(n,p-1);
}
