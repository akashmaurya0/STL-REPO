#include<iostream>
#include<array>
using namespace std;
int main()
{
	array<int,5> a={32,11};
	int size=a.size();
	for(int i=0;i<a.size();i++)
	cout<<a[i]<<endl;
	cout<<"at ->"<<a.at(1);
}
