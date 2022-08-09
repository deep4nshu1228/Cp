#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int p;
    cin >> p;
    int a[p];
    for(int i=1; i<=p; i++){
        cin >> a[i-1];
    }

    int b[p];
    for(int i=1; i<=p; i++){
        for(int j=1; j<=p; j++){
            if(i == a[j-1]){
                b[i-1] = j;
                break;
            }
        }
    }

    for(int k=0; k<p; k++){
        cout << b[k] << " ";
    }
    cout << "\n";
    return 0;
}