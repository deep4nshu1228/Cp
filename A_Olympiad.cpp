#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    sort(all(a));
    set<int> x;
    bool zero_in_array = false;
    for(int i=0; i<n; i++){
        if(a[i] == 0) 
            zero_in_array = true;
        x.insert(a[i]);
    }

    if(zero_in_array)
        cout << x.size() - 1 << "\n";
    else
        cout << x.size() << "\n";
    return 0;
}