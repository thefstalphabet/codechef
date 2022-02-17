#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
   int x, y; cin>>x>>y;
   if(x>y) cout<<"CAR"<<endl;
   else if(x<y) cout<<"BIKE"<<endl;
   else cout<<"SAME"<<endl;
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