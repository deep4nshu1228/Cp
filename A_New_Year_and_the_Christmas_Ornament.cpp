#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int y,b,r;
    cin >> y >> b >> r;

    cout << min(y + 2, min(b + 1, r)) * 3 - 3;

    return 0;
}