#include<bits/stdc++.h>
using namespace std;
int main()
{
   int array[8]={0,0,0,23,0,90,76,0};
   int array1[8];
   int size=8,count=0,j,index=0;
   for(int i=0,j=0;i<size&&j<size;i++)
   {
   	if(array[i]==0)
   	{
   		count++;
   		continue;
	   }
	   else 
	   {
	   	array1[j]=array[i];
	   	j++;
	   	index++;
	   }
	   
   	
   }
   for(j=index;j<(index+count-1);j++)
   {
   	array1[j]=0;
   }
  for( int k=0;k<size;k++)
  cout<<array1[k]<<" ";
}

