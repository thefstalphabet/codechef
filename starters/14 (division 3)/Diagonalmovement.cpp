#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; // test cases
    cin >> t;
    while (t--)
    {   
        // x and y is thr coordinates 
        ll x, y;
        cin>>x>>y;
        int sum = x+y;
        if(sum%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}