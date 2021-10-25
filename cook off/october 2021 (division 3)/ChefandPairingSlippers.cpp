#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    /*
    - n is the total number of slippers.
    - l is the number of left slippers.
    - x the price of a pair of slippers in rupees.
    */
   int n, l, x;
   cin>>n>>l>>x;
   int right_slippers = n-l;
   cout<<min(l, right_slippers)*x<<"\n";
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