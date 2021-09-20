#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
	int t; // t is test cases
	cin>>t;
	while(t--){ // test case loop
		int n; // n is length of array
		cin>>n;
        	// evens and odds array to store even and odd element seprately the element
		vector<int> evens, odds;
		for(int i=0; i<n; i++){
			int x;
			cin>>x;
            		// checking if element are even or odd and storing it into arrays
			if(x%2==1){
				evens.push_back(x);
			}
			else{
				odds.push_back(x);
			}
		}
		// checking if all even or all odd
		if(evens.empty() || odds.empty()){
			cout<<"-1"<<endl;
		}
		else{
			// when we have both even and both elements then simply printing the element in one line
			for(int i=0; i<evens.size(); i++){
				cout<<evens[i]<<" ";
			}
			for(int i=0; i<odds.size(); i++){
				cout<<odds[i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
} 