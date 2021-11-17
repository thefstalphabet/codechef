#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n; // length of array
    cin>>n;
    map<ll, ll> mp; 
    // taking the array input in map
    for(ll i=0; i<n; i++){
        ll x;
        cin>>x;
        mp[x]++;
    }
    for(auto pr: mp){
        // greater element
        auto x = mp.rbegin();
        // if greater ele aving occurance 2
        if(x->second==2){
            cout<<"-1"<<"\n";
            return;
        }
        // if any ele of map having occurance greater than 2
        else if(pr.second>2){
            cout<<"-1"<<"\n";
            return;
        }
    }
    // printing the element that have 2 occurance
    for(auto pr: mp){
        if(pr.second==2){
            cout<<pr.first<<" ";
        }
    }
    // printing the element in decresing order
    for (auto it = mp.rbegin(); it!= mp.rend(); it++) {
        cout<<it->first<<" ";
    }
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