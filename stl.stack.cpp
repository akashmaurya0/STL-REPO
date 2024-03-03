#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack <string> s;
	s.push("akash kumar maurya");
cout<<s.top();
   s.push("anand kumar mauya");
   s.push("manju devi");
   cout<<endl<<s.top()<<endl;
   cout<<"size of stack is->"<<s.size()<<endl;
  
   cout<<endl<<s.top()<<endl;
   cout<<"size of stack is->"<<s.size()<<endl;
   cout<<" is empty->"<<s.empty()<<endl;
   for(int i=1;i<=s.size();i++)
   s.pop();
    cout<<endl<<" is empty->"<<s.empty()<<endl;
   
	
}
