#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int d1,d2,d3;
    cin >> d1 >> d2 >> d3;

    int ans1 = d1+d3+d2;
    int ans2 = 2*(d1+d3);
    int ans3 = 2*(d2+d3);
    int ans4 = 2*(d1+d2);
    cout << min(min(ans1,ans4), min(ans2,ans3));

    return 0;
}