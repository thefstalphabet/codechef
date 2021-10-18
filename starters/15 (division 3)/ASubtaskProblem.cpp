#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; // test cases
    cin>>t;
    while(t--){
        ll n, m, k;
        cin>>n>>m>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        for(int i=0; i<n; i++){
            if(arr[i]==1 && i==n-1){
                cout<<"100"<<"\n";
                break;
            }
            else if(arr[i]==0 && i<m){
                cout<<"0"<<"\n";
                break;
            }
            else if(arr[i]==0 && i>m-1){
                cout<<k<<"\n";
                break;
            }
            else if(arr[i]==1){
                continue;
            }
        }
    }
    return 0;
}