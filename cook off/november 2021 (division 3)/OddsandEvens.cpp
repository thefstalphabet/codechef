#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int a, b;
    cin>>a>>b;
    int sum = a+b;
    if(sum%2==0){
        cout<<"Bob"<<"\n";
    }
    else{
        cout<<"Alice"<<"\n";
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