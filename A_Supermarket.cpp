#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,m;
    cin >> n >> m;

    float mn = INT_MAX;
    while(n--){
        int a,b;
        cin >> a >> b;
        float x = (float)a/(float)b;
        if(x < mn)
            mn = x;
    }

    cout << setprecision(10) << mn*(float)m << "\n";
    return 0;
}