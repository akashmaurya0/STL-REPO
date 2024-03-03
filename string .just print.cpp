#include<bits/stdc++.h>
using namespace std;
int main() 
{
    string t="ak akask bk ak sk baa ";
    string s="ak";
    int S=s.size();
    int T=t.size();
    for(int i=0;i<(T-S+1);i++)
    {
    	if(t.substr(i,S)==s)
    	{
    		cout<<"found at index->"<<i <<endl;
		}
	}

    return 0;
}

