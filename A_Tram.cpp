#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin>>t;
    int n = 0;
    int m = INT_MIN;
    while(t--){
        int a,b; cin>>a>>b;
        n = n+b;
        n=n-a;
        m = max(m,n);
    }
    cout<<m<<"\n";
    return 0;
}