#include<bits/stdc++.h>
using namespace std;
// bubble sort algorithm
void bubble_sort(int array[],int size)
{
	int i,round;
	for(round=1;round<size;round++)
	{  
		for(i=0;i<=size-round-1;i++)
		{  
			if(array[i]>array[i+1])
			{
				swap(array[i],array[i+1]);
			}
		}	
	}
}
// print function
void print_array(int array[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int array[10]={23,23,76,5,7,7,45,30,32,3};
	int size=10;
	cout<<"Array before sorting ->";
		print_array(array,size);
	bubble_sort(array,size);
	cout<<"Array after sorting ->";
	print_array(array,size);
}
