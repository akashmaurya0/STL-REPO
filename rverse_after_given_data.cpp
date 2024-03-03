#include<bits/stdc++.h>
using namespace std;
int main()
{
	int array[8]={12,4,5,80,5,0,7,8};
	int key,i,index,flag=0,count=0,n=8;
	cout<<"Array is ->";
	for(int p=0;p<n;p++)
	{
		cout<<array[p]<<" ";
	}
	cout<<endl;
	cout<<"enter the key to reverse->";
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(key==array[i])
		{
			index=i;
			flag=1;
			count++;
			break;
		}
		
		
	}
	if(index==7)
	{
	
	cout<<endl<<"this is last element can't reverse";
	return 0;
}
	
	if(flag!=1)
	{
		cout<<endl<<" key is not avilable";
		return 0;
	}
	else
	if(flag==1&&index<7)
	{
		int last=n-1,first=index+1;
		while(first<last)
		{
			swap(array[first],array[last]);
			first++;
			last--;
		}
	}
	cout<<"Array is ->";
	for(int p=0;p<n;p++)
	{
		cout<<array[p]<<" ";
	}
	
}
