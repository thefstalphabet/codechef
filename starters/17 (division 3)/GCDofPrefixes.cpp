#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    // n is the size of array
    int n;
    cin>>n;
    // taking inputs of array
    vector<int> ve(n+1);
    for(int i=1; i<=n; i++){
        cin>>ve[i];
    }
    
    int ok = 1;
    for(int i=2; i<=n; i++){
        if(ve[i-1]%ve[i]){
            ok = 0;
        }
    }

    if(ok){
        for(int i=1; i<=n; i++){
            cout<<ve[i]<<" ";
        }
        cout<<"\n";
    }
    else{
        cout<<"-1\n";
    }
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