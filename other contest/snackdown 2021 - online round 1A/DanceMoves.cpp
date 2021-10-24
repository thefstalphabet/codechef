#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    /*
    - x is the position at chef standing
    - y is the position at his partner standing
    */
    ll x, y;
    cin>>x>>y;
    ll cnt = 0;
    if(x>y) cnt = x-y;
    else if((y-x)%2 == 0) cnt = (y-x)/2;
    else cnt = (y-x)/2+2;
    cout<<cnt<<'\n';
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