#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue <int> q;
	q.push(56);
	q.push(89);
	q.push(6);
	q.push(56);
	q.push(44);
	int n;
	n=q.size();
	for(int i=1;i<=n;i++)
	{
		cout<<q.front()<<" "; 
		q.pop();
	}
	cout<<endl<<"is empty->"<<q.empty();
	cout<<endl<<"size of queqe->"<<q.size();
	
}
