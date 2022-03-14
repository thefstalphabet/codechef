#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
   ll n, ans=0;
   cin>>n;
   for(int i=1; i<=n; i+=2){
       ans++;
   }
   cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll testCase;
    cin>>testCase;
    while(testCase--) {
        solve();
    }
    return 0;
}