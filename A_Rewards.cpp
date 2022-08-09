#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int p1,p2,p3;
    cin >> p1 >> p2 >> p3;

    int total_prize = p1 + p2 + p3;
    int shelves_for_prize = (total_prize+4)/5;

    int m1,m2,m3;
    cin >> m1 >> m2 >> m3;

    int total_medal = m1 + m2 + m3;
    int shelves_for_medals = (total_medal+9)/10;

    int total_shelves = shelves_for_medals + shelves_for_prize;

    int n;
    cin >> n;

    if(n >= total_shelves){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

    return 0;
}