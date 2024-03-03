#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main()
{
  deque<int>dq;
  dq.push_front(21);
  dq.push_back(22);
  dq.push_back(63);
  dq.push_front(93);
  dq.push_front(21);
  dq.push_back(22);
  dq.push_back(63);
  dq.push_front(93);
  cout<<"deque data->";
  for(int i:dq)
  {
  	cout<<" "<<i;
  }
  dq.pop_back();
  dq.pop_front();
  cout<<endl<<"deque data after pop operation->";
  for(int i:dq)
  {
  	cout<<" "<<i;
  }
  cout<<"cahliye suru karte hai"<<endl;
  cout<<"size of dq is ->"<<dq.size()<<endl;
  cout<<" is empty ->"<<dq.size()<<endl;
  cout<<"front is ->"<<dq.front()<<endl;
  dq.erase(dq.begin()+1);
   cout<<endl<<"deque data after erase  operation->";
  for(int i:dq)
  {
  	cout<<" "<<i;
  }
}

