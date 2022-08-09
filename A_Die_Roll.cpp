#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int y,w;
    cin >> y >> w;

    int Max = max(y,w);

    if(Max == 1) { cout << "1/1\n"; }
    else if(Max == 2) { cout << "5/6\n"; }
    else if(Max == 3) { cout << "2/3\n"; }
    else if(Max == 4) { cout << "1/2\n"; }
    else if(Max == 5) { cout << "1/3\n"; }
    else { cout << "1/6\n"; }
    return 0;
}