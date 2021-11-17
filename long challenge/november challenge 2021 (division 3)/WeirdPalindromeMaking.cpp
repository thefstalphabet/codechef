#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    // n is the size of the array
    ll n;
    cin>>n;
    ll odd = 0;
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        if(x%2!=0) odd++;
    }
    ll ans = odd/2;
    cout<<ans<<"\n";
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