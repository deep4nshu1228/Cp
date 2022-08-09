#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,m,k;
    cin >> n >> m >> k;

    // if( min(m,k) >= n){
    //     cout << "Yes\n";
    // }
    if(n <= k && n <= m){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
    return 0;
}