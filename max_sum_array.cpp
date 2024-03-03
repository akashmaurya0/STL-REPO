#include<bits/stdc++.h>
using namespace std;
int main()
{
	int array[6]={1,2,3,4,5,6};
    int i,j,k,sum=0,result,max=INT_MIN;
    
    for(i=0;i<6;i++)
   {
   	for(j=i;j<6;j++)
   	{  sum=0;
   		
   		for(k=i;k<=j;k++)
   		{
   			cout<<array[k]<<" ";
   			sum+=array[k];
		   }
		    cout<<endl;
		    if(max<sum)
		    {
		    	max=sum;
			}
	   }
	  
	  
   }
cout<<endl<<" max sum ->"<<max;
}
