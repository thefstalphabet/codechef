#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n, x;
    cin>>n>>x;

    ll c = 0, w = 0, ua = 0;

    if(x%3==0) {
        c = x/3;
    } else if ((x+1)%3==0) {
        c = (x+1)/3;
        w = 1;
    } else if ((x+2)%3==0) {
        c = (x+2)/3;
        w = 2;
    }

    ua = n - c - w;

    if(c+w<=n) {
        cout<<"YES"<<endl;
        cout<<c<<" "<<w<<" "<<ua<<endl;
    } else {
        cout<<"NO"<<endl;
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