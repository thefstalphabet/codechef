#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    // array to store ans
    vector<int> res;
    // storing element in array
    int temp = 1;
    while(res.size()!=n){
        res.push_back(temp);
        temp+=2;
    }
    // printing array
    for(auto ele: res){
        cout<<ele<<" ";
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