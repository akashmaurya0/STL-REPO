#include<bits/stdc++.h>
using namespace std;
int main()
{
   int array[7]={76,56,61,93,56,56,56};
   int i,j,flag;
   for(i=0;i<7;i++)
   {
   	 flag=1;
   	 for(j=1;j<7;j++)
      {
      	if(i==j)
      	{
      		continue;
		  }
		  else
		  if(array[i]==array[j])
   	{
   	 flag=0;  	
	}

	 }
     if(flag==1)
     {
     cout<<" "<<array[i];	
	 }
   }
}
