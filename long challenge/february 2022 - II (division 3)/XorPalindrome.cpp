#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int len; cin>>len;
    string s; cin>>s;
    int ones = 0, zeros = 0;
    for(auto ch: s){
        if(ch=='0') zeros++; 
        else  ones++;
    }
    if(ones%2==0 && zeros%2==0) cout<<"YES"<<endl;
    else if (ones==zeros) cout<<"YES"<<endl;
    else if (abs(ones-zeros)%2 != 0) cout<<"YES"<<endl; 
    else cout<<"NO"<<endl;
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