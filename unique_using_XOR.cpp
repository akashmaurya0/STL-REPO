#include<bits/stdc++.h>
using namespace std;
int main()
{
	 int a[]={12,34,2,2,34};
	 int result=0;
	 int size=5;
	 for(int i=0;i<size;i++)
	 {
	 	result=result^a[i];
	 }
	 cout<<"unique value is ->"<<result;
}
