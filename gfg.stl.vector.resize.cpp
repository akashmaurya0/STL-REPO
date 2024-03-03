#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(12);
	v.push_back(60);
	v.push_back(46);
	v.push_back(72);
	v.push_back(50);
	cout<<" vector size->"<<v.size()<<endl;
	cout<<" vector capacity->"<<v.capacity()<<endl;
	for(auto i:v)
	{
		cout<<" "<<i;
	}
	cout<<endl;
	v.resize(3);cout<<" vector size->"<<v.size()<<endl;
	cout<<" vector capacity->"<<v.capacity()<<endl;
	for(auto i:v)
	{
		cout<<" "<<i;
	}
		cout<<endl;
	v.resize(10);cout<<" vector size->"<<v.size()<<endl;
	cout<<" vector capacity->"<<v.capacity()<<endl;
	for(auto i:v)
	{
		cout<<" "<<i;
	}
	
}
