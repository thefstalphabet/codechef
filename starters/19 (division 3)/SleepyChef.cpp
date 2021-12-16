#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    /*
    n is the len of string
    k is the contigues hours to take a nap
    */
    ll n, k; cin>>n>>k;
    string s; cin>>s; // s is the binary string
    ll temp = 0; // hours count
    ll ans = 0; // to store ans
    for(auto ele: s){
        if(ele=='0') temp++;
        else if(ele=='1') temp=0;
        // when we found the contigues free hours
        if(temp>=k){
            ans++; temp=0;
        }
    }
    cout<<ans<<"\n";
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