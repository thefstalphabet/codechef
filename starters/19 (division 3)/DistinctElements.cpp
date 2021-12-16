#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    // n is the len of array;
    ll n; cin>>n;
    // map to store freq of ele
    unordered_map<int, int> ump;
    for(ll i=0; i<n; i++){
        int x; cin>>x;
        ump[x]++;
    }
    
    ll k=1;
    ll temp = 1e9+7;
    for(auto i:ump){
        k=(k*(i.second+1))%temp;
    }
    cout<<k-1<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // number of test cases
    ll testCases; 
    cin>>testCases;
    while(testCases--){
        solve();
    }
    return 0;
}