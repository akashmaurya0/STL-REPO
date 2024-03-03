#include<bits/stdc++.h>
using namespace std;
int main()
{
   int array[7]={76,98,61,93,70,95,3};
   int i=0;
   while(i<=5)
   {
   	swap(array[i],array[i+1]);
   	if(i<6)
   	{
	   
   	i=i+2;
   }
   }
   for(i=0;i<7;i++)
   {
   	cout<<" "<<array[i];
   }
}
