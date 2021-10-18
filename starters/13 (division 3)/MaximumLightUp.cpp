#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--){
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        /*
        1. p is chef buget.
        2. a is cost of fuljari, b is cost of anar, c is cost of chakari.
        3. x is the fuljari need to light an anar.
        4. y is the fuljari need to light an chakari.
        */
        ll p, a, b, c, x, y;
        cin>>p>>a>>b>>c>>x>>y;
        cout<<p/min(b + x*a, c + y*a)<<"\n";
    }
    return 0;
}