#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t; // test cases
    cin>>t;
    while(t--){
        // l is the starting point
        // r is the ending point
        long long l, r;
        cin>>l>>r;
        /*
        1. r/3 give the number divisible by 3 from 0 to r range
        2. we know that we have to find the num divisible by 3 to l to r range
        3. so we also find the number divisible by 3 1 to r range
        4. then simple subtract them to find ans
        */
        cout<<(r/3)-((l-1)/3)<<"\n";
    }
    return 0;
}