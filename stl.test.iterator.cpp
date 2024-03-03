#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v1={12,43,45,2,21};
	vector<int>::iterator i;
	i=v1.begin();
	cout<<" begining element is =>";
	cout<<*i<<endl;
		vector<int>::iterator j;
	j=v1.end();
	cout<<" last element is =>";
	cout<<*j<<endl;
	cout<<v1.size();
}
