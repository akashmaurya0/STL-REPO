#include<iostream>
using namespace std;
void ncr(int a,int b);
int factorial(int a);
int main()
{
	int n,a,b;
	cout<<"enter two numbers";
	cin>>a>>b;
	ncr(a,b);
}
  void ncr(int a,int b)
  {
  	int result;
  	result=factorial(a)/(factorial(a-b)*factorial(b));
  	cout<<"answer is ->"<<result;
  }
  int factorial(int a)
  {
    int i,t=1;
    for(i=1;i<=a;i++)
    {
    	t=t*i;
	}
	return t;
  }
