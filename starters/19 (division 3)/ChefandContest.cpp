#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    /*
    x is the number of ques that chef have solved
    y is the number of ques that chefina have solved
    p is the wrong submit of ans that chef does
    q is the wrong submit of ans that chefina does
    */
    int x, y, p, q; cin>>x>>y>>p>>q;
    if(x+(10*p) > y+(10*q)) cout<<"Chefina\n";
    else if(x+(10*p) < y+(10*q)) cout<<"Chef\n";
    else cout<<"Draw\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // number of test cases
    ll testCases; 
    cin>>testCases;
    while(testCases--){
        solve();
    }
    return 0;
}