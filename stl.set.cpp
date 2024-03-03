#include<iostream>
#include<set>
using namespace std;
int main()
{
set<int> s;
s.insert(12);
s.insert(766);
s.insert(12);
s.insert(2453);
s.insert(89);
s.insert(2453);
s.insert(12);
s.insert(136);
for(int i:s)
cout<<i<< " ";
cout<<endl<<"size kya hai bhi? ->"<<s.size();
set<int>::iterator it=s.begin();
it++;
s.erase(it);
cout<<endl;
for(int i:s)
cout<<i<< " ";
cout<<s.count(121)<<"\n";
set<int>::iterator it1=s.find(766);
for(auto it=it1;it!=s.end();it++)
cout<<*it<<" ";



}
