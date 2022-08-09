#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;

    if((n-2)%3 != 0)
        cout << "1 1 " << n-2 << "\n";
    else
        cout << "1 2 " << n-3 << "\n";
    return 0;
}