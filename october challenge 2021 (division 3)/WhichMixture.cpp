#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; // test cases
    cin>>t;
    while(t--){
        // a is units of solid
        // b is unit of liquid
        ll a,b;
        cin>>a>>b;
        if(a>0 && b>0) cout<<"Solution"<<"\n";
        else if(b==0) cout<<"Solid"<<"\n";
        else cout<<"Liquid"<<"\n";
    }
    return 0;
}