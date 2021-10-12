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
        1. a is the size of first box.
        2. b is the size of sec box
        3. c is the size of third box.
        4. d is the size of bags.
        */
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a+b+c<=d) cout<<"1"<<"\n";
        else if(a+b<=d || a+c<=d) cout<<"2"<<"\n";
        else cout<<"3"<<"\n";
    }
    return 0;
}