#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    // n is the len of array
    ll n; cin>>n;
    // vector to store ans
    vector<int> ans;
    ans.push_back(n);
    for(int i=1; i<=n-1; i++) ans.push_back(i);
    // printing the array
    for(auto ele: ans) cout<<ele<<" ";
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // number of test cases
    ll testCases; 
    cin>>testCases;
    while(testCases--){
        solve();
    }
    return 0;
}