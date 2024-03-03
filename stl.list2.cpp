#include<iostream>
#include<list>
using namespace std;
int main()
{
list <int> l1;
l1.push_back(34);
l1.push_back(45);
l1.push_back(8);
l1.push_back(9);

for(int i:l1)
cout<<" "<<i;


}
