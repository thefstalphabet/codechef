#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int x, y;
    cin>>x>>y;
    cout<<x/(2*y)<<endl;
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