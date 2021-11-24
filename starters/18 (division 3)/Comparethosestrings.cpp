#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n; // len of strs
    cin>>n;
    string a, b; // a and b strs
    cin>>a>>b;
    int count=0;
	int flag=false;
	for(int i=n-1;i>=0;i--){
	    if(a[i]<b[i]){
	        count++;
	        flag=true;
	    }
        else if(a[i]>b[i]){
	        flag=false;
	    }
	    else if(a[i]==b[i]){
	        if(flag==true){
	            count++;
	        }
	    }
	}
	cout<<count<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}