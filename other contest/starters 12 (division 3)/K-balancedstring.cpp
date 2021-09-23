#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; // testcases
    cin>>t;
    while(t--){
        // n is the len of string 
        // k is the blance string number
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count = 0; // to store the opertion to make blance string
        // iterating over string
        for(int i=0; i<n; i++){
            // if our current char is zero than we skip
            if(s[i]=='0') continue;

            // if i+k is inside the len of string and i-k is equal to one char<
            // if i-k is inside the len of string and i-k is equal to one char
            if((i+k<n && s[i+k]=='1') || i-k>=0 && s[i-k]=='1'){
                continue;
            }
            // if i+k is in the range of the string than we change it into 1
            if(i+k<n){
                s[i+k] = '1';
            }
            // if i+k is not in the range of the string than we change current char into 0
            else{
                s[i] = '0';
            }
            count++;
                
        }
        cout<<count<<endl;

    }

    return 0;
}