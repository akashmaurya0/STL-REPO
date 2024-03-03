#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a={12,2,34,22};
	a.push_back(-1);

	for(auto i:a)
	cout<<" "<<i;
	cout<<" \n ab suru kara ";
	cout<<"array size->"<<a.size();
	cout<<"\nat awala baat"<<a.at(0);
	cout<<" \n front wali baate"<<a.front();
	cout<<"\n back wali baate ->"<<a.back();
	sort(a.begin(),a.end());
	cout<<"\n sort ke baad bate->";
	for(auto i:a)
	cout<<" "<<i;
		reverse(a.begin(),a.end());
	cout<<"\n reverse ke baad bate->";
	for(auto i:a)
	cout<<" "<<i;
	cout<<"\n upper bound wali kahani->";
  auto it=	upper_bound(a.begin(),a.end(),34);
  cout<<*it;
  cout<<"\n lower bound wali kahani->";
  it=	lower_bound(a.begin(),a.end(),34);
  cout<<*it;
  cout<<"\n empty wali baate ->"<<a.empty();
  cout<<"\n--------------------------\n";
  cout<<"kuchh baate aisi bhi(delete wali)->\n";
  a.pop_back();
  
  for(auto i:a)
	cout<<" "<<i;
	auto t2=a.begin();
	a.erase(t2+2);
}
