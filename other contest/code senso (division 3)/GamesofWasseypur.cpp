#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    /*
    - n is the length of string
    - s is the string
    */
    ll n; cin>>n;
    string s; cin>>s;
    ll count = 1;
    for(ll i=0; i<n-1; i++){
        if(s[i]!=s[i+1]){
            count++;
        }
    }
    if(count%3==2){
        cout<<"RAMADHIR"<<"\n";
    }
    else{
        cout<<"SAHID"<<"\n";
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