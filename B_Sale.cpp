#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,m;
    cin >> n >> m;

    vector<int> a(n);
    for(auto &it: a) cin >> it;

    sort(all(a));
    int sum = 0;
    int i=0;
    while(i < m && a[i] < 0){
        sum -= a[i];
        i++;
    }

    cout << abs(sum) << "\n";
    return 0;
}