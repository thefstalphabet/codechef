#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; // test cases
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // if n is not divisible by 4 then we cant make the array
        if(n%4 != 0){
            cout<<"NO"<<"\n";
        } 
        else{
            cout<<"Yes"<<"\n";
            int half_of_n = n/4;
            int q2 = 2*(n/4);
            int q3 = 3*(n/4);
            // these two loops print the fist array
            for(int i=1; i<=half_of_n; i++){
                cout<<i<<" "; 
            }
            for(int i=q3+1; i<=n; i++){
                cout<<i<<" "; 
            }
            cout<<"\n";
            // this loop print the sec array
            for(int i=half_of_n+1; i<=q3; i++){
                cout<<i<<" ";
            }
            cout<<"\n";
        }    
    }
    return 0;
}