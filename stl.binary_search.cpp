#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	v.push_back(12);
	v.push_back(23);
		v.push_back(77);
	v.push_back(7);
		v.push_back(92);
	v.push_back(3);
	cout<<binary_search(v.begin(),v.end(),23)<<endl;
	cout<<upper_bound(v.begin(),v.end(),78)-v.begin();
	int a=90,b=89;
	cout<<endl<<"max value is "<<max(a,b);
	cout<<endl<<"min value is "<<min(a,b);
	swap(a,b);
	cout<<endl<<"a->"<<a<<"b->"<<b;
	cout<<"\n"<<" after sort";
	sort(v.begin(),v.end());
	for(int i:v)
	cout<<" "<<i;
	cout<<"\n  checking for reverse"<<endl;
	string s="akash";
	reverse(s.begin(),s.end());
	cout<<s;
}
