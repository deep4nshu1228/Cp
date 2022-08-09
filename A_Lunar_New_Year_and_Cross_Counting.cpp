#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

int main()
{
    int n; cin >> n;
    char arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    int cnt = 0;
    for(int i=1; i<n-1; i++){
        for(int j=1; j<n-1; j++){
            if(arr[i][j] == 'X'){
                if(arr[i-1][j-1] == 'X' && arr[i+1][j-1] == 'X' && arr[i+1][j+1] == 'X' && arr[i-1][j+1] == 'X'){
                    cnt++;
                }
            }
        }
    }

    cout << cnt << "\n";
    return 0;
}