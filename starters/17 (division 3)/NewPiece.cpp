#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    /*
    - a, b is the current location where piece exists
    - p, q is the cell where piece want to move
    */
    int a, b, p, q;
    cin>>a>>b>>p>>q;
    int ans = 0;
    if(a==p && b==q) ans = 0;
    else if((a+b)%2 != (p+q)%2) ans = 1;
    else ans = 2;
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