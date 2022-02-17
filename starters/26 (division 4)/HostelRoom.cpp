#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, x;
    cin>>n>>x;
    int maxi=x;
    for(int i=0; i<n; i++){
        int ele; 
        cin>>ele;
        x+=ele;
        if(maxi<x) maxi=x;
    }
    cout<<maxi<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll testCase;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}