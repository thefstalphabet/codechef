#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; // test cases
    cin>>t;
    while(t--){
        int d, l, r;
        cin>>d>>l>>r;
        if(d>=l && d<=r){
            cout<<"Take second dose now"<<endl;
        }
        else if(d>=r){
            cout<<"Too Late"<<endl;
        }
        else{
            cout<<"Too Early"<<endl;
        }

    }
    return 0;
}