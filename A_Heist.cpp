#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    if(n==1){
        cout << 0 << "\n";
    }
    else{
        cout << ( *max_element(all(a)) + 1 - *min_element(all(a)) ) - n << "\n";
    }
    return 0;
}