#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,string> m1={{1,"akash"},{2,"anand"}};
	m1.insert(make_pair(3,"karan"));
	for( auto i:m1)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	m1.erase(m1.begin());
	for( auto i:m1)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
}
