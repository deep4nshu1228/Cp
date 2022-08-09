#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        char a[n][n];
        vector<pair<int,int>> star;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
                if(a[i][j] == '*'){
                    star.push_back(make_pair(i,j));
                }
            }
        }

        if(star[0].first == star[1].first){
            if(star[0].first == 0){
                a[star[0].first + 1][star[0].second] = '*';
                a[star[1].first + 1][star[1].second] = '*';
            }
            else{
                a[star[0].first - 1][star[0].second] = '*';
                a[star[1].first - 1][star[1].second] = '*';
            }
        }
        else if(star[0].second == star[1].second){
            if(star[0].second == 0){
                a[star[0].first][star[0].second + 1] = '*';
                a[star[1].first][star[1].second + 1] = '*';
            }
            else{
                a[star[0].first][star[0].second - 1] = '*';
                a[star[1].first][star[1].second - 1] = '*';
            }
        }
        else{
            a[star[0].first][star[1].second] = '*';
            a[star[1].first][star[0].second] = '*';
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << a[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}