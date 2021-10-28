#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    /*
    - a and b is the point we have to increse
    - p and q is the point that we have to achive if it possible
    */
    ll a, b, p, q;
    cin>>a>>b>>p>>q;
    if((p%a==0 && q%b==0) && (abs(p/a - q/b)==1 || p/a==q/b)){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
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