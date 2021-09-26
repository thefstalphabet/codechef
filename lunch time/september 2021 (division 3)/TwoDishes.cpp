#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; // test cases
    cin>>t;
    while(t--){
        // n is no. of dishes
        // a is no. of fruits
        // b is no. of vegitables
        // c is no of fishes
        int n, a, b, c;
        cin>>n>>a>>b>>c;
        int dishes = 0;
        // cooking dishes      
        while(true){
            // cooking type1 dish
            if(a>0 && b>0){
                a--;
                b--;
                dishes++;
                continue;
            }
            // cooking type2 dish
            if(b>0 && c>0){
                b--;
                c--;
                dishes++;
                continue;
            }
            break;
        }
        if(dishes>=n){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}