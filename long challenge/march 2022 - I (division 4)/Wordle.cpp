#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
   string s, t;
   cin>>s>>t;

   string ans;
   for(int i=0; i<s.size(); i++){
       if(s[i]!=t[i]){
           ans+='B';
       } else {
           ans+='G';
       }
   }
   cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase;
    cin>>testCase;
    while(testCase--) {
        solve();
    }
    return 0;
}