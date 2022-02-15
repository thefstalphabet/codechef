#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
   int n; cin>>n;
   vector<int> arr;
   int operation = 0, temp = 0;
   for(int i=1; i<=n; i++){
    int x; cin>>x;
    if(x==i+temp){
        operation++;
        temp++;
    }
   }
   cout<<operation<<endl;
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