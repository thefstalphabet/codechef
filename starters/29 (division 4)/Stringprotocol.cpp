#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int time = 0;
    for(int i=0; i<n; i++){
        if(s[i]!=s[i+1]){
            time++;
        } else if (s[i]==s[i+1]){
            time++;
            i+=1;
        }
    }
    cout<<time<<endl;
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