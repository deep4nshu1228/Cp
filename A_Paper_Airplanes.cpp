#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int k,n,s,p;
    cin >> k >> n >> s >> p;

    int sheets_per_person = (n+s-1)/s;
    int sheets = k*sheets_per_person;

    cout << ( (sheets + p -1)/p ) << "\n";
    return 0;
}