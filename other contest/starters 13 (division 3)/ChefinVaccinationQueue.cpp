#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        /*
        1. n is the number of people in line (queue).
        2. p is the position of the chef.
        3. x is min to vacinate the child.
        4. y is min to vacinate the person.
        */
        int n, p, x, y;
        cin>>n>>p>>x>>y;
        int ans = 0; // to store answer
        for(int i=1; i<=n; i++){
            int num;
            cin>>num;
            if(num==1 && i<=p){
                ans = ans + y;
            }
            else if (num==0 && i<=p){
                ans = ans + x;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}