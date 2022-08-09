#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    ll t; cin>>t;
    vector<ll> a;
    for(int i=0; i<t; i++){
        int x; cin>>x;
        a.push_back(x);
    }
    sort(all(a));
    int maximum = INT_MIN;
    for(int i=0; i<t; i++){
        if(a[i]*(t-i) > maximum){maximum = a[i]*(t-i);}
    }
    cout<<maximum<<"\n";
    return 0;
}