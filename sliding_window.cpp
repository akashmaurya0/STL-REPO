#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5,s=12;
      int arr[]={1,2,3,7,5};
      
    int start = 0;
    long long sum = 0;
    vector<int> v1(1, -1);

    for (int i = 0; i < n; ++i) {
        if (sum < s) {
            sum += arr[i];
        } else {
            while (sum > s && start <= i) {
                sum -= arr[start++];
            }
            if (sum == s) {
                cout<<start+1<<" ";
                cout<<i+1<<" ";
            }
        }
    }

    cout<<-1;
}
