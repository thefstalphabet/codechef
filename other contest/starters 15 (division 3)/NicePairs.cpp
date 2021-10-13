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
        int n; // n is the len og string
        cin>>n;
        string s; // s is the string
        cin>>s;
        int ans = 0; // to store count
        for(int i=0; i<n; i++){
            for(int j=i+1; j<=min(n-1,i+9); j++){
                if (j-i == abs(s[j]-s[i])){
                    ans+=1;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}