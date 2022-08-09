#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin>>n;
    if(n%5!=0) cout<<(n/5)+1<<"\n";
    else cout<<n/5<<"\n";
    return 0;
}