#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin>>t;
    int count=0;
    while(t--){
        int a,b,c; cin>>a>>b>>c;
        if((a+b+c)>=2){
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}