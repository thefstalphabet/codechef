#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    // n is the len of string
    ll n; cin>>n;
    string s = "";
    if(n%2!=0){
        cout<<"-1\n";
    }
    else{
        for(ll i=0; i<n; i++){
            if(i%2!=0) s+='1';
            else if(i%2==0) s+='0';
        }
        cout<<s<<"\n";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // number of test cases
    ll testCases; 
    cin>>testCases;
    while(testCases--){
        solve();
    }
    return 0;
}
