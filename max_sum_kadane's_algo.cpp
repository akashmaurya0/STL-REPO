#include<bits/stdc++.h>
using namespace std;
int main()
{
	int array[6]={1,2,3,4,5,6};
    int i,j,k,sum=0,maxi=INT_MIN;
    
    for(i=0;i<6;i++)
   {
   	
   	sum+=array[i];
   	maxi=max(sum,maxi);
   	if(sum<0)
   	sum=0;
   	
   }
   cout<<maxi;
}
