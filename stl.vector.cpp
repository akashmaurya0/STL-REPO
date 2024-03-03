#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> v1;
	v1.push_back(1);
	v1.push_back(15);
	v1.push_back(18);
  cout<<"size of vector->"<<v1.size()<<endl;
  cout<<"capacity of vector->"<<v1.capacity()<<endl;
  cout<<"before pop"<<endl;
  for(int i:v1)
  {
  	cout<<i<<" ";
  }
   cout<<endl<<"after pop"<<endl;
   v1.pop_back();
  for(int i:v1)
  {
  	cout<<i<<" ";
  }
  v1.clear();
  for(int i:v1)
  {
  	cout<<i<<" "; 
  }
	cout<<endl<<"after clear size is -> "<<v1.size();
}
