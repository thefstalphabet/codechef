#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    // x and k is simply the numbers
    ll x, k;
    cin>>x>>k;
    ll min = 2*x;
    ll max = (k*x) * (x*k-1);
    cout<<min<<" "<<max<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}