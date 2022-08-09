#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;

        int rank = s[0] - '0';

        int no = s.length();
        // int x = 0;
        // for(int i = 1; i <= no; i++){
        //     x += i;
        // }

        int x = no*(no+1)/2;
        int ans = (rank-1)*10 + x;

        cout << ans << "\n";;
    }

    return 0;
}