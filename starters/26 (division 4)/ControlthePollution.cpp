#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
   int n, x, y; cin>>n>>x>>y;
   
   int smoke = INT_MAX;
   for(int i=0; i<=n; i++){
       for(int j=0; j<=n; j++){
           int temp = i*4 + j*100;
           if(temp>=n){
               smoke = min(smoke, (i*y + j*x));
           }
       }
   }
   cout<<smoke<<endl;
   
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