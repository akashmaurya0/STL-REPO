#include<bits/stdc++.h>
using namespace std;
int first_occurence(int array[],int n,int key)
{
	int s=0,e=n-1,index=-1;
	int mid=s+(e-s)/2;
	while(s<=e)
	{
		if(array[mid]==key)
		{
			index=mid;
			e=mid-1;
		}
		else if(array[mid]>key)
		{
			e=mid-1;
		}
		else if(array[mid]<key)
		{
		  s=mid+1;	
		}
		mid=s+(e-s)/2;
	}
	return index;
}
// last occurence 
int last_occurence(int array[],int n,int key)
{
	int s=0,e=n-1,index=-1;
	int mid=s+(e-s)/2;
	while(s<=e)
	{
		if(array[mid]==key)
		{
			index=mid;
			s=mid+1;
		}
		else if(array[mid]>key)
		{
			e=mid-1;
		}
		else if(array[mid]<key)
		{
		  s=mid+1;	
		}
	mid=s+(e-s)/2;
	}
	return index;
}
int main()
{
	int size=6,key,first_index,last_index;
	int array[6]={1,1,2,2,3,4};
	cout<<"enter the data you want to search in array";
	cin>>key;
	first_index=first_occurence(array,size,key);
	cout<<" first index of "<<key<<" is "<<first_index<<endl;
	last_index=last_occurence(array,size,key);
	cout<<" last index of "<<key<<" is "<<last_index<<endl;
	
}
