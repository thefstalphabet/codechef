// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// void solve(){
//     /*
//     - n is the size of the array
//     - a is the array
//     */
//     ll n;
//     cin>>n;
//     vector<int> a;
//     vector<int> b;
//     vector<int> c;
//     for(int x=0; x<n; x++){
//         int ele;
//         cin>>ele;
//         a.push_back(ele);
//     }
//     for(int y=1; y<n; y++){
//         int temp = y%a[y];
//         auto it = find(c.begin(), c.end(), temp);
//         if (it != c.end()){
//             continue;
//         }
//         else{
//             c.push_back(temp);
//             b.push_back(y);
//         } 
//     }

//     for(auto ele: b){
//         cout<<ele<<" ";
//     }
//     cout<<"\n";

// }
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin>>t;
//     while(t--){
//         solve();
//     }

//     return 0;
// }