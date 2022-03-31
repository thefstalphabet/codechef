#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, x, y;
    cin>>n>>x>>y;
    string s;
    cin>>s;

    int tax = 0;
    int ones = 0;
    int zeros = 0;

    for(int i=0; i<n; i++) {
        if(s[i]=='1') ones++;
        else zeros++;
    }

    if(ones == 0 || zeros == 0) {
        cout<<"0"<<endl;
    } else {
        (x>y) ? cout<<y<<endl : cout<<x<<endl;
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