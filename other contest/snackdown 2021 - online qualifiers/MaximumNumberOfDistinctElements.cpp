#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    /*
    - n is the size of the array
    - b is the given array
    */
    ll n;
    cin>>n;
    // vector of pair where we store the element and their index
    vector<pair<int, int>> b;
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        b.push_back({ele, i});
    }
    sort(b.begin(), b.end());

    vector<int> a(n);
    int want = 0;
    for(auto [ele, i]: b){
        if(want <= ele - 1){
            a[i] = want;
            want++;
        }
        else{
            a[i] = 0;
        }
    }
    // printing
    for(auto ele: a) cout<<ele<<" ";
    cout<<"\n";

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