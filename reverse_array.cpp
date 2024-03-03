#include<bits/stdc++.h>
using namespace std;
int main()
{
   int array[7]={76,98,61,93,70,95,3};
   int i;
   for(i=0;i<7/2;i++)
   {
   	swap(array[i],array[6-i]);
   }
   for(int j=0;j<7;j++)
   {
   	cout<<" "<<array[j];
   }
}

