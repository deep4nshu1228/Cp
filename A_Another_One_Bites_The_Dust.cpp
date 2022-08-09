#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

int main()
{
    ll a,b,ab;
    cin >> a >> b >> ab;
    
    if(a != b)
        cout <<  2*ab + 2*min(a,b) + 1;
    else    
        cout <<  2*ab + 2*min(a,b);
    return 0;
}