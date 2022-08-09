#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)
typedef long long int ll;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        set<int> a;
        for(int i=1; i*i<=n; i++){
            a.insert(i*i);
        }
        for(int i=1; i*i*i<=n; i++){
            a.insert(i*i*i);
        }
        cout<<a.size()<<"\n";
    }
    return 0;
}