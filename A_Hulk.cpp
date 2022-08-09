#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin>>t;
    for(int i=1; i<=t; i++){
        if(i%2 != 0){
            cout<<"I hate ";
            if(i<t){
                cout<<"that ";
            }
        }
        if(i%2 == 0){
            cout<<"I love ";
            if(i<t){
                cout<<"that ";
            }
        }
        if(i==t) { cout<<"it\n"; }
    }
    return 0;
}