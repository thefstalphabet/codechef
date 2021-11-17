#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    /*
    - x is the current price of petrol
    - y is the current price of diesel
    - a is the price of petrol that increse after k months
    - b is the price of diesel that increse after k months
    - k is the months
    */
    ll x, y, a, b, k;
    cin>>x>>y>>a>>b>>k;
    ll finPriceOfPetrol = (k*a)+x;
    ll finPriceOfDiesel = (k*b)+y;
    if(finPriceOfDiesel<finPriceOfPetrol){
        cout<<"DIESEL"<<"\n";
    }
    else if(finPriceOfPetrol<finPriceOfDiesel){
        cout<<"PETROL"<<"\n";
    }
    else{
        cout<<"SAME PRICE"<<"\n";
    }

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