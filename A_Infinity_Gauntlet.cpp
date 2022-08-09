#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    map<string,string> x;
    x["red"] = "Reality";
    x["green"] = "Time";
    x["purple"] = "Power";
    x["yellow"] = "Mind";
    x["blue"] = "Space";
    x["orange"] = "Soul";

    int n; cin >> n;
    cout << 6-n << "\n";

    for(int i=0; i<n; i++){
        string s; cin >> s;
        x[s] = "NULL";
    }

    auto itr = x.begin();
    while(itr != x.end()){
        if(itr->second != "NULL")
            cout << itr->second << "\n";
        itr++;
    }
    return 0;
}