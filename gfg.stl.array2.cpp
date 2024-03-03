//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
       int a=0,b=0,c=0,d=0,e=0,f=0;
       for(int i=0;i<x.length();i++)
       {
           if(x[i]=='{')
           {
              a++; 
              
           }
           if(x[i]=='}')
           {
              b++; 
               
           }
           if(x[i]=='(')
           {
               c++;
               
           }
           if(x[i]==')')
           {
              d++; 
              
           }
           if(x[i]=='[')
           {
              e++; 
               
           }
           if(x[i]==']')
           {
              f++; 
              
           }
          
       }
       if(a==b && c==d && e==f)
       {    
          
           return 1;
       }
       else
       
       return 0;
       
       
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends
