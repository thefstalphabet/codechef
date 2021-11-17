#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    // size of array
    ll n; 
    cin>>n;
    // taking input for array
    vector<ll> arr(n,0);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }

    // to store ans
    ll ans = 0;
    for(ll j=0; j<=61; j++){
        ll one = 0;
        for(ll i=0; i<n; i++){
            if((1ll<<j) & arr[i]){
                one++;
            }
        }
        if(one%2==0) continue;
        if(j==61){
            ans = -1;
            break;
        }
        ans+=(1ll<<j);
        for(ll i=0; i<n; i++){
            arr[i] += (1ll<<j);
        }
    }
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