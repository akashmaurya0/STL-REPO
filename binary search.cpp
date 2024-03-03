#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int data);
int main()
{    int found, data;
	int arr[10]={1,2,4,6,10,32,56,76,87,593};
	cout<<"enter the data you want to search"<<endl;
	cin>>data;
	
   	found=binary_search(arr,10,data);
   	if(found)
   	{
   		cout<<"found";
	   }
	   else 
	   cout<<"not found";
}
int binary_search(int arr[],int n,int data)
{
	int current_index,lower_index=0,upper_index=n-1;
	current_index=(upper_index+lower_index)/2;
	while(lower_index!=upper_index)
	{
	
	if(arr[current_index]==data)
	return 1;
	if(arr[current_index]>data)
	{
		upper_index=current_index-1;
		current_index=(upper_index+lower_index)/2;
	}
		if(arr[current_index]<data)
	{
		lower_index=current_index+1;
		current_index=(upper_index+lower_index)/2;
	}
	
	
}
if(lower_index==upper_index&&arr[current_index]==data)
	return 1;
return 0;	
}
