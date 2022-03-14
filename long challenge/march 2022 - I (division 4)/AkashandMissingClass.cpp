#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
   ll n;
   cin>>n;
   if(n<6){
       cout<<"0"<<endl;
   } else {
       cout<<(n+1)/7<<endl;
   }
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