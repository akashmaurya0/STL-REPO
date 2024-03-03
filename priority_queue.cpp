#include<bits/stdc++.h>
using namespace std;
int main()
{
   priority_queue<int>pq;
   pq.push(23);
   pq.push(27);
   pq.push(67);
   pq.push(84);
   pq.push(345);
   pq.push(82);
   pq.push(821);
   
   cout<<pq.top()<<endl;
   pq.pop();
   cout<<pq.top()<<endl;
   pq.pop();
   cout<<"size is :"<<pq.size();
}