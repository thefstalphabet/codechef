#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    // n is the number of student
    // k is the number of student that are called in sigle day
	int n, k;
    cin>>n>>k;
    int stu_called = 0;
    int days = 0;
    while(stu_called<n){
        stu_called+=k;
        days++;
    }
    cout<<days<<"\n";

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