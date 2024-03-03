#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s1;
    cout<<"test stack "<<endl;
    s1.push(12);
    s1.push(23);
    s1.push(15);
    s1.push(6);
    s1.push(18);
    s1.push(29);
    s1.push(122);
    s1.push(234);
    cout<<"value of top is :"<<s1.top()<<endl;
    s1.pop();
    cout<<"after pop value of top is :"<<s1.top()<<"\n";

}