#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin>>n;
    stack<ll> s; 
    ll power = pow(2,n);
    while(power!=1){
        power = power/2;
        s.push(power);
    }
    cout<<1<<" ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";
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