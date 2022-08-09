#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,k;
    cin >> n >> k;

    int cnt = 0;
    cnt += ((n*8)+(k-1))/k;
    cnt += ((n*5)+(k-1))/k;
    cnt += ((n*2)+(k-1))/k;

    cout << cnt << "\n";
    return 0;
}