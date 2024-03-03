#include<bits/stdc++.h>
using namespace std;
int main()
{
	 int a[]={1,2,3,4,1};
	 int result=0;
	 int size=5;
	 for(int i=0;i<size;i++)
	 {
	 	result=result^a[i];
	 }
	 for(int j=1;j<size;j++)
	 {
	 	result=result^j;
	 }
	cout<<"duplicate value is ->"<<result; 
}
