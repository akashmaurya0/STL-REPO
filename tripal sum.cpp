#include<bits/stdc++.h>
using namespace std;
int main()
{
   int array[7]={1,2,3,4,5,6,7};
   int i,j,k;
   for(i=0;i<7;i++)
   {
   	 
   	  for(j=i;j<7;j++)
   {
   	 for(k=i;k<=j;k++)
   	 cout<<array[i]<<" + "<<array[j]<<" + "<<array[k]<<" = "<<(array[i]+array[j]+array[k])<<endl;
   }
   }
}
