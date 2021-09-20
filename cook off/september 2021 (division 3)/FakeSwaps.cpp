#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
	int t; // t is testcases
	cin>>t;
	while(t--){
		// n is length of binary strings
		int n;
		cin>>n;
		// s and p is binary string
		string s,p;
		cin>>s>>p;
		// cnt has number of 1 in p string
		int cnt = count(p.begin(), p.end(), '1');
		// cnt p has all 1 and all 0
		if(cnt==n || cnt==0){
			// if s and p is already equal than return yes, otherwise return no
			(s==p) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
		}
		// if cnt doesnot have all 1 and all 0 then ans is always yes
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}