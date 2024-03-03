#include<iostream>
#include<array>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	array<int,12> array1={12,34,2,3,5,44};
	array<string,10> array2={"akash","anand"};
	array<int,12> array3={99,66,56,7,76,66};
	
	cout<<"all the element of array is =>";
	for(auto i:array1)
	{
		cout<<" "<<i;
	}
	cout<<"\n length"<<array1.size();
		sort(array1.begin(),array1.end());
	cout<<endl<<"sorted  array is =>";
	for(auto i:array1)
	{
		cout<<" "<<i;
	}
	cout<<endl<<"hmhmhm"<<"string array is => ";
  for(auto i:array2)
	{
		cout<<" "<<i;
	}
	
		cout<<endl<<" array3 is =>";
	for(auto i:array3)
	{
		cout<<" "<<i;
	}
	array1.swap(array3);
	
		cout<<endl<<" array1 is =>";
	for(auto i:array1)
	{
		cout<<" "<<i;
	}
	
		cout<<endl<<" array3 is =>";
	for(auto i:array3)
	{
		cout<<" "<<i;
	}
}
