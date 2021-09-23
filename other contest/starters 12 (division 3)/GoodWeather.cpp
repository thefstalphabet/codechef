#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; // test cases
	cin>>t;
	while(t--){
		int arr[7]; // array that store week
		int no_of_sunny_days = 0;
		int no_of_rainy_days = 0;
		// iterating over the week
		for(int i=0; i<7; i++){
			cin>>arr[i];
			// checking if rainy or sunny
			if(arr[i]==1) no_of_sunny_days++;
			else no_of_rainy_days++;
		}
		if(no_of_sunny_days>no_of_rainy_days) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}