#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,string> m;
	m.insert({1,"akash"});
	m.insert({3,"anand"});
	m.insert({7,"mom"});
	m.insert({5,"dad"});
	m.insert({2,"k_w"});
	for(auto i:m)
	cout<<i.first<<" "<<i.second<<endl;
	cout<<"the size of map is ->"<<m.size()<<endl;
	m.erase(5);
		for(auto i:m)
	cout<<i.first<<" "<<i.second<<endl;
	cout<<"is empty ->"<<m.empty()<<endl;
	auto it=m.find(3);
	for(auto i=it;i!=m.end();i++)
	{
		cout<<" "<<(*i).first;
	}
}
