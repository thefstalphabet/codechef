#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    // x is the points of a problem
    ll x;
    cin>>x;
    if(x>=1 && x<100) cout<<"Easy"<<"\n";
    else if(x>=100 && x<200) cout<<"Medium"<<"\n";
    else cout<<"Hard"<<"\n";
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