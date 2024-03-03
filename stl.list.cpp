#include<iostream>
#include<list>
using namespace std;
int main()
{
  list <int> l1;
  l1.push_back(45);
  l1.push_back(23);
  l1.push_front(12);
   l1.push_back(45);
  l1.push_back(23);
  l1.push_front(12);
  cout<<"list elements are ->";
  for(int i:l1)
  cout<< i<<" ";
  l1.erase(l1.begin());
  cout<<" \n after erase ->";
   for(int i:l1)
  cout<< i<<" ";
  
  
}

