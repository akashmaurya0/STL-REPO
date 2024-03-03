#include<bits/stdc++.h>
using namespace std;
int main()
{
	int array[8]={12,4,5,80,5,0,7,8};
	int i,last=7,temp,rotation;
	cout<<" Array is ->";
		for(int k=0;k<8;k++)
	cout<<" "<<array[k];
	cout<<endl;
	cout<<"enter the rotation number->";
	cin>>rotation;
	for(int f=1;f<=rotation;f++)
	{
	
	temp=array[last];
	for(i=7;i>0;i--)
	{
		array[i]=array[i-1];
	}
	swap(array[0],temp);
	
}
for(int k=0;k<8;k++)
	cout<<" "<<array[k];
}
