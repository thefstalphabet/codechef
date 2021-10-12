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
        1. n is the number
        2. d is the digit
        3. m is the refrence of n number
        4. r is the reminder that can calculate
        5. degi is the digits count
        6. ans store the final answer
        */
        ll n, d;
        cin>>n>>d;
        ll m = n, r = 0, ans = 0, degi = 0;
        while(m>0){
            r = m%10;
            m = m/10;
            degi++;
            if(d==r){
                m = (r+1)*pow(10,degi-1) + m*pow(10,degi);
                degi = 0;
                ans = m-n;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}