#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> vc(n);
    for(int i=0; i<n; i++) {
        cin>>vc[i];
    }
    sort(vc.begin(), vc.end());
    int index = min(k, n-1);
    cout<<vc[index]<<endl;
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