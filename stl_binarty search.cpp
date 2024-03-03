#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v={11,22,33,22,47,7,3,82,9};
  bool b=binary_search(v.begin(),v.begin()+4,252);
  cout<<b;
}
