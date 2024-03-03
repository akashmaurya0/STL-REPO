#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v1={12,43,45,2,21};
	vector<int>::iterator i;
	for(i=v1.end();i!=v1.begin();i--)
	{
		if(i!=v1.end())
	    cout<<*i<<" ";
	}
	cout<<" "<<*i;
	
	
}
