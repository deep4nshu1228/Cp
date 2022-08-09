#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,m;
    cin >> n >> m;

    int cnt[10];
    for(int i=0; i<10; i++)
        cnt[i] = 0;

    vector<int> a(n);
    for(auto &it: a) cin >> it;

    vector<int> b(m);
    for(auto &it: b){
        cin >> it;
        cnt[it]++;
    }

    for(int i=0; i<n; i++){
        if(cnt[a[i]] > 0)
            cout << a[i] << " ";
    }
    cout << "\n";
    
    return 0;
}