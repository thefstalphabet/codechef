#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int len; cin>>len; // len of string
    string str; cin>>str;
    for(int i=0; i<len-3; i++){
        string sub = str.substr(i, 4);
        if(sub=="code"){
            cout<<"AC\n";
            return;
        }
        else if(sub=="chef"){
            cout<<"WA\n";
            return;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // number of test cases
    ll testCases; cin>>testCases;
    while(testCases--){
        solve();
    }
    return 0;
}