#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    // k is thr total number of second
    ll k;
    cin>>k;
    ll steps = 0;
    for(int i=1; i<=k; i++){
        if(i%2==0){
            steps = steps - 1;
        }
        else{
            steps = steps + 3;
        }
    }
    cout<<steps<<"\n";
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