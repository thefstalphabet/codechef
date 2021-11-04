#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    string s;
    cin>>s;
    // sorting the string
    sort(s.begin(), s.end());
    // to store answers
    ll ans = 0;
    int temp = 1;
    for(int i=0; i<s.size(); i++){
        ans+=temp*(s[i] & 31);
        temp++;
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}