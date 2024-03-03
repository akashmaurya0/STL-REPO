#include<bits/stdc++.h>
using namespace std;
// insertion sort
void insertion_sort(int array[],int size)
{
	int i,j;
	for( i=1;i<size;i++)
	{  
		int temp=array[i];
		for(j=i-1;j>=0;j--)
		{
			if(array[j]>temp)
			{
				array[j+1]=array[j];
			}
			else 
			break;
			
		}
		array[j+1]=temp;
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
	int array[10]={12,23,76,5,7,2,45,30,32,3};
	int size=10;
	cout<<"Array before sorting ->";
	print_array(array,size);
	insertion_sort(array,size);
	cout<<"Array after sorting ->";
	print_array(array,size);
}
