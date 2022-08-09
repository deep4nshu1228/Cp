#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; 
    cin >> n;

    vector<int> a(n);
    for(auto &it: a) cin >> it;

    sort(all(a));
    int max = a[a.size()-1];
    int ans = 0;
    for(int i=0; i<a.size()-1; i++){
        if(a[i]<max){ans += max-a[i];}
    }
    cout << ans << "\n";
    return 0;
}