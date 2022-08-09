#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int r,b;
    cin >> r >> b;
    int min = (r<b)?r:b;
    int max = (r>=b)?r:b;
    int left = max - min;
    int can_wear = left / 2;

    cout << min << " " << can_wear << "\n";
    return 0;
}