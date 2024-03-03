#include<iostream>
#include<queue>
using namespace std;
int main()
{
 priority_queue<int> pq;
 pq.push(67);
 pq.push(7);
 pq.push(87);
 pq.push(697);
 pq.push(90); 
  cout<<"front is ->"<<pq.top()<<endl;
  int n=pq.size();
  for(int i=1;i<=n;i++)
  {
  	cout<<" "<<pq.top();
  	pq.pop();
  }
}
