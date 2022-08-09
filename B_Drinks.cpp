#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin>>t;
    int a[t];
    double count = 0.00;
    for(int i=0; i<t; i++){
        cin >> a[i];
        count = count + a[i];
    }

    cout << fixed << setprecision(12) << count/t << "\n";
    return 0;
}