#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int a,b; cin >> a >> b;

    int first_wins = 0, second_wins = 0, draw = 0;

    for(int i = 1; i <= 6; i++){
        int x = abs(a - i);
        int y = abs(b - i);

        if(x < y) first_wins++;
        else if(x == y) draw++;
        else second_wins++;
    }

    cout << first_wins << " " << draw << " " << second_wins << "\n";
    return 0;
}