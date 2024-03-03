#include<iostream>
using namespace std;
int factorial(int n)
{   int result=1;
	if(n==0||n==1)
	return 1;
	else
	{
		
	result=n*factorial(n-1);	
	}
}
int main()
{
	int n,result;
	cout<<"Enter the number to find factorial ->";
	cin>>n;
	result=factorial(n);
	cout<<"factorial of "<<n<<" is ->"<<result;
}
