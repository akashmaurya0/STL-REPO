#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector<int> v1={1,21,12,3,3,465,898},v2={34,61,89,23,87,32,23};
 for(auto i1:v2)
 v1.push_back(i1);
  sort(v1.begin(),v1.end());
 for(auto i2:v1)
 cout<<" "<<i2;

}
