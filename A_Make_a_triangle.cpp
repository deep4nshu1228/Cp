#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    vector<int> a(3);
    for(auto &it: a) cin >> it;

    sort(all(a));

    int x = (a[2]+1) - (a[0]+a[1]);
    if(x > 0)
        cout << x << "\n";
    else        
        cout << "0\n";
    return 0;
}