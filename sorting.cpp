#include<bits/stdc++.h>
using namespace std;
int find_min_index(int array[],int start,int size)
{
	int min=array[start];
	int min_index=start;
	for(int i=start;i<size;i++)
	{
		if(min>=array[i])
		{
			min=array[i];
			min_index=i;
		}
	}
	return min_index;
}
int main()
{
	int array[5]={78,67,98,43,22};
	int i,temp;
	for(i=0;i<4;i++)
	{
		int index=find_min_index(array,i,5);
		swap(array[i],array[index]);
		
	}
	for(i=0;i<5;i++)
	{
		cout<<" "<<array[i];
	}
	
	
}
