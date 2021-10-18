#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; // test cases
    cin>>t;
    while(t--){
        /*
        1. x is the point that RCB already have
        2. y is the point that they earn to qualify for playoff
        3. z is the game left for play off
        */
        ll x, y, z;
        cin>>x>>y>>z;
        // total point
        int total_points = x + (2*z);
        if(total_points>=y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}