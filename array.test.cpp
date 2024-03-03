#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100]={12,34,45,676};
	int b[]={12,234,346,567,55,76,5,754};
	int length_of_a=sizeof(a)/sizeof(a[0]);
	int length_of_b=sizeof(b)/sizeof(b[0]);
	cout<<" size of a is ->"<<length_of_a<<endl;
	cout<<" size of b is ->"<<length_of_b<<endl;
	cout<<" Array a's elements are->";
	for(int i=0;i<length_of_a;i++)
	{
		cout<<" "<<a[i];
	}
	cout<<endl<<" Array b's elements are->";
	for(int i=0;i<length_of_b;i++)
	{
		cout<<" "<<b[i];
	}
	
}
