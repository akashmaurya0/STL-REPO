#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
                 
    int a[]={12,3,234,24,12,3,234,17,17,5};
    map<int,int> m1;
   for(int i=0;i<10;i++)
   {
    
    m1[a[i]]++;
   }
   for(auto it:m1)
   {
    cout<<it.first<<" ->"<<it.second<<endl;
   }
   
    return 0;
}