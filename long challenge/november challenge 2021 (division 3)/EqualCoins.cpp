#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    /*
    - x is the numbers of coins that have value 1
    - y is the numbers of coins that have value 2
    */
    ll x, y;
    cin>>x>>y;
    ll totalRs = (x*1)+(y*2);
    if(totalRs%2==0){
        if(x==0 && y%2!=0 || y==0 && x%2!=0){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
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