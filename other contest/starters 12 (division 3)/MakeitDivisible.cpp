#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; // number of testcases
	cin>>t;
	while(t--){
        int n; // n is the digits we have to find
        cin>>n;
        for(int i=1; i<=n; i++){
            // if n is 1 then we print 3
            // if n is 2 then we print 33
            if(i==1 || i==n){
                cout<<3;
            }
            // if n is greater than 2 then we print 303 ans soo on
            else cout<<0;
        }
        cout<<endl;
	}
	return 0;
}