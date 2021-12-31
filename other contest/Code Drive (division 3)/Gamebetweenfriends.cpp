#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    /*
    a is num of coins that nitin has
    b is num of coins that cobhagya has
    c is num of coins that ritik gives to who is loosing
    d is num of coins that satyarth gives ro who is loosing
    */
    int a, b, c, d; cin>>a>>b>>c>>d;
    // ritik gives coins who is loosing
    if(a < b) a+=c;
    else b+=c;
    // satyarth gives coins who is loosing
    if(a < b) a+=d;
    else b+=d;
    // decision who is wining
    if(a > b) cout<<"N\n";
    else if(a < b) cout<<"S\n";
    else cout<<"N\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // number of test cases
    ll testCases; cin>>testCases;
    while(testCases--){
        solve();
    }
    return 0;
}