#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={12,34,54,23,23,5,6,4,46};
    v.push_back(3);
    int j=1;
    v.erase(remove(v.begin(),v.end(),23),v.end());
    for(auto i:v)
    {
        cout<<" "<<i;
    }
    v.insert(v.begin(),84);
    cout<<endl;
     for(auto i:v)
    {
       if(i==3)
       {
        v.insert(v.begin()+j,333);
        break;
       }
       j++;
    }
    cout<<endl;
     for(auto i:v)
     {
        cout<<i<<" ";
     }
    return 0;
}
