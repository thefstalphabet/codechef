#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
	int t; // t is test cases
	cin>>t;
	while(t--){
		int n; // n is number of tyres
		cin>>n;
        // creating car from 4 tyers
		while(n>2) n = n - 4;
        /* after creating cars, if we have zero numbers of tyer then chef friend wont able to buy car so printing no. If we have some tyers left after creating the cars the we able to create bick so chef friend but the bick hence printing YES. */ 
        (n==0) ? cout<<"NO"<<endl : cout<<"YES"<<endl;
	}
	return 0;
}