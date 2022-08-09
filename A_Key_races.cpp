#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int s,v1,v2,p1,p2;
    cin >> s >> v1 >> v2 >> p1 >> p2;

    int x = (v1*s) + (2*p1);
    int y = (v2*s) + (2*p2);

    if(x == y)
        cout << "Friendship\n";
    else if(x < y)
        cout << "First\n";
    else
        cout << "Second\n";
    return 0;
}