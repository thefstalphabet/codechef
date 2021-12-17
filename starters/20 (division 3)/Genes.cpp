#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char a, b; cin>>a>>b;
    if(a==b) cout<<a<<"\n";
    else if(a=='R' && b=='B' || a=='B' && b=='R') cout<<"R"<<"\n"; 
    else if(a=='B' && b=='G' || a=='G' && b=='B') cout<<"B"<<"\n"; 
    else if(a=='R' && b=='G' || a=='G' && b=='R') cout<<"R"<<"\n"; 
    return 0;
}