#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll x;
    cin>>x;
    int curr_power = 1;
    while(curr_power*2-1<=x){
        curr_power*=2;
    }
    cout<<curr_power<<'\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; // test cases
    cin>>t;
    while(t--){
        solve();
         
    }
    return 0;
}