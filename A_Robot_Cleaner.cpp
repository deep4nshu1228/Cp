#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n,m,ra,ca,rd,cd;
        cin >> n >> m >> ra >> ca >> rd >> cd;

        // if(ra == rd || ca == cd){
        //     cout << 0 << "\n";
        //     continue;
        // }

        // int horizontal_distance;
        // if(ra < rd){
        //     horizontal_distance = rd - ra;
        // }
        // else{
        //     horizontal_distance = (n - rd) + (n - ra);     // 2*n - ra - rd
        // }

        // int vertical_distance;
        // if(ca < cd){
        //     vertical_distance = cd - ca;
        // }
        // else{
        //     vertical_distance = (m - ca) + (m - cd);
        // }

        // cout << min(horizontal_distance, vertical_distance) << "\n";

        cout << min(
            ra <= rd ? rd - ra : 2*n - ra - rd,
            ca <= cd ? cd - ca : 2*m - ca - cd
        ) << "\n";
    }
    return 0;
}