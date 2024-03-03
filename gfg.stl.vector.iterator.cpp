#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v={1,5,7,43};
	v.push_back(23);
	vector<int>::iterator i;
	for(int j=0;j<v.size();j++)
	{
		cout<<" "<<v[j];
	}
	cout<<"\n after using iterator";
	for(auto i=v.begin();i!=v.end();i++)
	cout<<" "<<*i;
	sort(v.begin(),v.end());
	cout<<"\n after sorting";
	for(auto i=v.begin();i!=v.end();i++)
	cout<<" "<<*i;
	cout<<"\n the expriment is on";
	for(auto i=v.begin();i!=v.end();i++)
	{
		if(i==(v.begin()+2))
		{
			i=v.insert(i,90);
		}
	}
		cout<<"\n adding at begin";
	for(auto i=v.begin();i!=v.end();i++)
	cout<<" "<<*i;
	
}

