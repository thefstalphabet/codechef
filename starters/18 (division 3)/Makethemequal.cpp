#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n; // len of array
    cin>>n;
    vector<int>ve; // array
    // taking input for array
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        ve.push_back(x);
    }
    sort(ve.begin(), ve.end());
    int max = ve[n-1];
    int min = ve[0];
    cout<<abs(max-min)<<"\n";
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