#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    /*
    - indP is number of matches india won
    - engP is number of matches england won
    */
    ll indP = 0, engP = 0;
    for(int x=1; x<=5; x++){
        int result;
        cin>>result;
        if(result==1) indP++;
        else if(result==2) engP++;
    }
    if(indP>engP) cout<<"INDIA"<<"\n";
    else if(engP>indP) cout<<"ENGLAND"<<"\n";
    else cout<<"DRAW"<<"\n";
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