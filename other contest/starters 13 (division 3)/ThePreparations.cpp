#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; // test cases
    cin>>t;
    while(t--){
        /*
        1. m is the min that the exam is going to start.
        2. n is the Season episodes.
        3. k is the duration of each episodes.
        */
        int m, n, k;
        cin>>m>>n>>k;
        int x = n*k;
        (x<m) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}