#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    // a, b, c is the lottery number
    ll a, b, c;
    cin>>a>>b>>c;
    if(a==7 || b==7 || c==7) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
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