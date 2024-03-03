#include<bits/stdc++.h>
using namespace std;
void fun(vector<int>&,int);
int main()
{    vector<int>v;
int x;
	cout<<"jaldi waha se hato aur ek int insert karo";
	cin>>x;
	fun(v,x);
	for(auto i:v)
	cout<<" "<<i;
}
void fun(vector<int> &v,int x)
{
	v.push_back(x);
}

