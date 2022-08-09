#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        int cnt = 0;
        for(int i=1; i<=9; i++){
            int power_of_ten = 0;
            for(int j=0; j<9; j++){
                power_of_ten += pow(10,j);
                if(i*power_of_ten <= n) cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}