#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
  // n is friends
  // m is the capicity 
  // k is the students thaat aare already enrolled
  int n, m, k;
  cin>>n>>m>>k;

  int seets = abs(m-k);
  if(seets<n) {
      cout<<"NO"<<endl;
  } else {
      cout<<"YES"<<endl;
  }
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