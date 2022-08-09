#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; 
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int untreated = 0;
    int police = 0;
    int crime = 0;

    for(int i = 0; i < n;  i++){
        if(a[i] > 0){
            police = police + a[i];
        }
        if(a[i] < 0){
            crime++;
            if(police > 0){ crime--; police--; }
            else if(police == 0){ untreated++; }
        }
    }

    cout << untreated << "\n";
    return 0;
}