#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  vector<int> v;
  v.push_back(76); 
   v.push_back(78); 
    v.push_back(54); 
     v.push_back(06); 
      v.push_back(30); 
       v.push_back(21);
       v.push_back(61);
       v.pop_back();
       cout<<"befor sorting  ->";
	   for(int i:v)
       {
       	cout<<" "<<i;
	   } 
	   cout<<endl;
	   cout<<"after sorting->";
       sort(v.begin(),v.end());
       for(int i:v)
       {
       	cout<<" "<<i;
	   }
    cout<<endl<<"swaping suru ho guru"<<endl;
    int a=90,b=78;
    swap(a,b);
    cout<<"a->"<<a<<"b->"<<b;
} 
