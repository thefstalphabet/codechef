#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; // test cases
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt = 0; // to store count of wand that chef used
        // first char is 0 then we have to use wand so cnt++
        if(s[0]=='0') cnt++;
        for(int i=1; i<s.size(); i++){
            if(s[i]!=s[i-1]){
                cnt++;
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}