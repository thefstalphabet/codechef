#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n; cin>>n; // size of array
    vector<int> ve(n); 

    int maxi = 0;
    int ele = 0;
    bool isEqual = true;

    for(int i=0; i<n; i++){
        cin>>ve[i]; // taking input for arr
        maxi = max(maxi, ve[i]); // finding max ele
        if(i==0){
            ele = ve[0];
        }
        else{
            if(ve[i]!=ele){
                isEqual = false;
            }
        }
    }
    if(isEqual) cout<<"0\n"; // when all ele are same
    else if(maxi==ve[n-1]) cout<<"1\n"; // when the last ele is maxi
    else cout<<"2\n"; 

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
