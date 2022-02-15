#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
   int x; cin>>x;
   string s; cin>>s;
   int carlsen = 0, chef = 0, winner;
   for(auto ch: s){
       if(ch=='C') carlsen+=2;
       else if (ch=='N') chef+=2;
       else {
           chef +=1;
           carlsen +=1;
       }

       // result
       if(carlsen>chef) winner = 60;
       else if (carlsen<chef) winner = 40;
       else winner = 55;
   }
    cout<<winner*x<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll testCase;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}