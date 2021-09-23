#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; // test cases
    cin>>t;
    while(t--){
        // a,b,c is the time taking to solve the problem
        // x,y,z is the points awarded after solving problem
        int a,b,c, x,y,z;
        cin>>a>>b>>c;
        cin>>x>>y>>z;
        int ans = 0; // to store ans
        for(int ta=0; ta<=20; ta++){
            for(int tb=0; tb<=20; tb++){
                for(int tc=0; tc<=20; tc++){
                    // total number of time that we pick up
                    int tt = ta*a + tb*b + tc*c;
                    if(tt<=240){
                        ans = max(ans, (ta*x + tb*y +tc*z));
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}