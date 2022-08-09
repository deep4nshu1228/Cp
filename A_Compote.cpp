#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    int x = a, y = b/2, z = c/4;

    int k = min(x,min(y,z));
    cout << (k)+(k*2)+(k*4) << "\n";
    return 0;
}