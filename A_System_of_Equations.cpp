#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,m;
    cin >> n >> m;

    int count = 0;
    int upper_bound = min(n,m);
    for(int i=0; i<=upper_bound; i++){
        for(int j=0; j<=upper_bound; j++){
            if( i*i + j == n && i + j*j == m){
                count++;
            }
        }
    }
    cout << count << "\n";
    return 0;
}