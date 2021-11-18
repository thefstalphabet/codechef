#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int x, y, z;
    cin>>x>>y>>z;
    if(x+y>z){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
    }
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