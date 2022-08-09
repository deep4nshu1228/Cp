#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;

    vector<string> a(n);
    for(auto &it: a) cin >> it;

    string team1 = a[0];
    string team2 = "NULL";

    int goal1 = 0;
    int goal2 = 0;
    for(int i=1; i<n; i++){
        if(a[i] != team1){
            team2 = a[i];
            goal2++;
        }
        else{
            goal1++;
        }
    }

    if(team2 == "NULL"){
        cout << team1 << "\n";
    }
    else{
        cout << (goal1 < goal2 ? team2 : team1) << "\n";
    }
    return 0;
}