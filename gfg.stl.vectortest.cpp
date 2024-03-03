#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<int,string>> v1={
	{1,"akash"},
	{2,"solar probe"},
	{3,"galaxy"},
	{4,"keypoint"},
	{5,"alpha"},{6,"ravi"}
	};
	v1.push_back({12,"akash"});
	cout<<"[ "<<endl;
	for(auto i:v1)
	{   
		cout<<"{"<<i.first<<" : "<<i.second<<"}"<<endl;
		
	}
	cout<<"]";
}
