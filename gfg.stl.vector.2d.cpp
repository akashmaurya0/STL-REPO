#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<vector<int>> v;
	v.push_back({12,56});
	v.push_back({12,84,90,71,78});
	v.push_back({89,87,43,72,10});
	v.push_back({12,84,90,71,78});
	v.push_back({12,56,88,66,44,33});
	v.push_back({12,84,90,71,78});
	for(auto i:v)
	{
		for(auto j:i)
		{
			cout<<" "<<j;
		}
		cout<<endl;
	}
}
