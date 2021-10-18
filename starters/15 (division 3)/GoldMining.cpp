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
        /*
        - n is the peoples going to gold mine
        - x is the total gold that mine conatin
        - y is the each person capicity of gold that they can caary
        */
        ll n, x, y;
        cin>>n>>x>>y;
        ll temp = (n+1)*y;
        if(temp>=x){
            cout<<"YES"<<"\n";
        }
        else{
             cout<<"NO"<<"\n";
        }
    }
    return 0;
}