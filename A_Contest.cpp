#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int p1 = max( (3*a)/10, a - ((a/250)*c));
    int p2 = max( (3*b)/10, b - ((b/250)*d));

    if(p1 > p2)
        cout << "Misha\n";
    else if(p1 == p2)
        cout << "Tie\n";
    else    
        cout << "Vasya\n";
    
    return 0;
}