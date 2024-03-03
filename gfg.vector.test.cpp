// C++ program to illustrate the
// vector::emplace() function
// insertion at the end
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> vec = { 10, 20, 30 };
	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << " ";

cout << " after deleting secons element: "<<endl;
vec.clear();
	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << " ";
cout<<"\n"<<" jaldi waha se hato";
	return 0;
}

