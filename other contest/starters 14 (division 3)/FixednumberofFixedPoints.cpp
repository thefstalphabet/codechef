#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; // test cases
    cin >> t;
    while (t--)
    {   
        /*
        1. n is the the number
        2. k is the number of index we have to find
        */
        ll n, k;
        cin>>n>>k;
        if(k==n){
            for(int i=1; i<=n; ++i){
                cout<<i<<" ";
            }
            cout<<"\n";
        }
        else if(k==n-1){
            cout<<"-1"<<"\n";
        }
        else{
            for(int i=1; i<=k; ++i){
                cout<<i<<" ";
            }
            for(int j=k+2; j<=n; ++j){
                cout<<j<<" ";
            }
            cout<<k+1<<"\n";
        }
    }
    return 0;
}