#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    string s; cin>>s;
    string p; cin>>p;
    reverse(all(s));
    if(s==p){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}