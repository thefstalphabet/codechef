#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    // n is the number of student
    int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];

	int cnt=0;
	for(int i=0;i<n;i++){
        int less=0,more=0;
        for(int j=0;j<n;j++){
            if(arr[j]<=arr[i]){
                less++;
            }
            if(arr[j]>arr[i]){
                more++;
            }
        }
        if(less>more){
            cnt++;
        }
    }
	cout<<cnt<<"\n";
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