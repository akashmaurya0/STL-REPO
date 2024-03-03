#include<iostream>
#include<array>
using namespace std;
int main()
{
	array<int,5>a={1,23,32};
	int size=a.size();
     cout<<"the size of arry is -> "<<a.size()<<endl;
	cout<<"checking for at index  -> "<<a.at(0)<<endl;
	cout<<"first element is -> "<<a.front() <<endl;
	cout<<"last element is ->"<< a.back()<<endl;
	cout<<" is empty ->  "<< a.empty()<<endl;
	
}
