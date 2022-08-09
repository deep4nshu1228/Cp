#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;

    char seats[n][5];

    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            cin >> seats[i][j];
        }
    }

    bool seats_available = false;

    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            if(j == 2) continue;
            if(seats[i][j] == seats[i][j+1] && seats[i][j] == 'O'){
                seats[i][j] = '+';
                seats[i][j+1] = '+';
                seats_available = true;
                break;
            }
        }
        if(seats_available) break;
    }
    
    if(seats_available){
        cout << "YES\n";
        for(int i=0; i<n; i++){
            for(int j=0; j<5; j++){
                cout << seats[i][j];
            }
            cout << "\n";
        }
    }
    else{
        cout << "NO\n";
    }
    return 0;
}