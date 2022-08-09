#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int tud = (k*l) / nl;
    int tul = c*d;
    int tus =  p / np;

    int step1 = tud < tul ? tud : tul;
    int ans = tus < step1 ? tus : step1;

    cout << (ans/n) << "\n";
    return 0;
}