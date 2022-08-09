#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
int main()
{
    int n,m,z;
    cin >> n >> m >> z;

    int g = gcd(n,m);
    int lcm = (n*m)/g;

    cout << (z / lcm) << "\n";
    return 0;
}