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
        ll n; // n is the number
        cin>>n;
        // p is the maximum power of 2
        int p = 0;
        for(int i=1; i<=n; i=2*i){
            p=i;
        }
        int x = p/2;
        int y = (n-p)+1;
        cout<<max(x,y)<<"\n"; 
    }
    return 0;
}