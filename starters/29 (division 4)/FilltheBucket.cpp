#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
  int k, x;
  cin>>k>>x;
  cout<<abs(k-x)<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll testCase;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}