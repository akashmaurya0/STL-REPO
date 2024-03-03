#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(34);
	v.push_back(78);
	v.push_back(40);
	v.push_back(21);
	v.push_back(99);
	v.push_back(69);
	
  cout<<"before sort->";
  for(int i:v)
  {
  	cout<<" "<<i;
  }
  sort(v.begin(),v.end());
	 cout<<endl <<"after sort->";
  for(int i:v)
  {
  	cout<<" "<<i;
  }
  cout<<"to chaliye suru karte hai"<<endl;
  cout<<"size is : "<<v.size()<<endl;
  cout<<"capacity is : "<<v.capacity()<<endl;
  cout<<" is empty : "<<v.empty()<<endl;
  cout<<"at wala : "<<v.at(3)<<endl;
  cout<<"front is : "<<v.front()<<endl;
  cout<<"back is : "<<v.back()<<endl;
  
 // cout<<"begin :"<<v.begin()<<endl;
 // cout<<"last is : "<<v.end()<<endl;
  v.pop_back();
  cout<<endl <<"after pop->";
  for(int i:v)
  {
  	cout<<" "<<i;
  }
  cout<<"ab erase ka maza lijiye "<<v.erase(v.begin()+1);
 } 

