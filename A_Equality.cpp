#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,k;
    cin >> n >> k;

    string s; cin >> s;
    int a[k];
    for(int i=0; i<k; i++){
        a[i] = 0;
    }

    for(int i=0; i<n; i++){
        a[(int)s[i] - 65]++;
    }

    int mn = INT_MAX;
    for(int i=0; i<k; i++){
        if(a[i] < mn)
            mn = a[i];
    }

    cout << mn*k << "\n";
    return 0;
}