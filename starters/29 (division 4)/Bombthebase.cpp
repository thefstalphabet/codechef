#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
  int n, x;
  cin>>n>>x;

  int maxi = 0;
  for(int i=1; i<=n; i++){
      int ele;
      cin>>ele;

      if(ele < x){
          maxi = max(maxi, i);
      }
  }
  cout<<maxi<<endl;
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