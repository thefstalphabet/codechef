#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
   int x, y, ans; cin>>x>>y;
   if(x<y){
       cout<<"0"<<endl;
       return;
   }
   cout<<x/y<<endl;
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