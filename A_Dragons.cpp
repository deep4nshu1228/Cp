#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int s,n;
    cin >> s >> n;

    vector<pair<int,int>> dragon;
    for(int i=0; i<n; i++){
        int d,b;
        cin >> d >> b;
        dragon.push_back(make_pair(d,b));
    }

    sort(all(dragon));
    int count = 1;

    for(auto &temp: dragon){
        if(temp.first < s){
            s += temp.second;
        }
        else{
            count = 0;
            cout << "NO\n";
            break;
        }
    }

    if(count){
        cout << "YES\n";
    }
    return 0;
}