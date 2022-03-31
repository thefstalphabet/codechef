#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int len;
    cin>>len;

    string s;
    cin>>s;

    vector<pair<int, int>> pr;

    for(int i=0; i<len; i++) {
        if (s[i] == '1') {
            pr.push_back({i+1, len-i});

            for(int j=0; j<len; j++) {
                if(s[j] == '1') {
                    s[j] = '0';
                } else {
                    s[j] = '1';
                }
            }
        }
    }

    cout<<pr.size()<<endl;
    for(auto ele: pr) {
        cout<<ele.first<<" "<<ele.second<<endl;
    }

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