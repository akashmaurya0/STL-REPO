#include<bits/stdc++.h>
using namespace std;
int main()
{ 
     vector<int>v={12,3,12,3,12,4,5,6};
     v.erase(remove(v.begin(),v.end(),12),v.end());
     for(auto i:v)
     {
        cout<<" "<<i;
     }
}