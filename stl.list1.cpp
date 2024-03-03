#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> l;
	l.push_back(12);
	l.push_front(05);
		l.push_back(192);
	l.push_front(45);
		l.push_back(87);
	l.push_front(05);
	for(int i:l)
	cout<<i<<" ";
	cout<<endl<<l.empty()<<endl;
	cout<<l.size();
    l.pop_front();
    cout<<endl<<"after pop size of list is ->";
    	cout<<l.size()<<endl;
    	
    	cout<<"front data is->"<<l.front();
    	cout<<endl<<l.back();
    	cout<<endl<<l.front()<<endl<<"after erase->";
    	l.erase(l.begin());
    	for(int i:l)
	cout<<i<<" ";

	
	
}

