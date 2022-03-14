#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    cout<<max(max(a, b), c)<<endl;
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