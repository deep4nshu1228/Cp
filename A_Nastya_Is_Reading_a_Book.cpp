#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    vector<pair<int,int>> a;
    for(int i=0; i<n; i++){
        int x,y;
        cin >> x >> y;
        a.push_back(make_pair(x,y));
    }

    int k; cin >> k;

    int chapter;
    for(int i=0; i<n; i++){
        if(k >= a[i].first && k <= a[i].second){
            chapter = i;
        }
    }

    cout << n-chapter << "\n";
    return 0;
}