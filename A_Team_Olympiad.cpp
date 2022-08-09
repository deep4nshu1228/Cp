#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int p = 0;
    int m = 0;
    int pe = 0;
    vector<int> ind_p;
    vector<int> ind_m;
    vector<int> ind_pe;
    for(int i=0; i < a.size(); i++){
        if(a[i]==1){p++; ind_p.push_back(i+1);}
        else if(a[i]==2){m++; ind_m.push_back(i+1);}
        else{pe++; ind_pe.push_back(i+1);}
    }
    int ans = min(p,min(m,pe));
    cout << ans << "\n";
    if(ans>0){
        for(int i = 0; i < ans; i++){
            cout << ind_p[i] << " "
                << ind_m[i] << " "
                << ind_pe[i] << "\n";
        }
    }
    return 0;
}