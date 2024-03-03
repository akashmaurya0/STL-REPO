#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque <int> d;
	d.push_front(12);
	d.push_back(32);
	d.push_back(45);
	d.push_back(4);
	cout<<"deque is ->";
	for(int i:d)
	cout<<i<<" ";
	cout<<endl<<"size of deque ->"<<d.size()<<endl;
	cout<<"\n erase function"<<endl;
	
	d.erase(d.begin(),d.begin()+1);
	cout<<endl<<"size of deque ->"<<d.size()<<endl;
	d.pop_back();
	d.pop_front();
	cout<<"after pop->";
	for(int i:d)
	cout<<i<<" ";
	cout<<endl<<"at third index ->"<<d.at(0)<<endl;
	d.clear();
	cout<<endl<<"after clear size is ->"<<d.size();
}
