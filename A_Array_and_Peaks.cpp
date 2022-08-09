#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,k;
        cin >> n >> k;

        if(n%2 == 0){
            if(k > (n-1)/2)
                cout << "-1\n";
            else{
                for(int i=1; i<=n; i++){
                    if(i%2 == 0 && k > 0){
                        cout << i+1 << " " << i << " ";
                        i++;
                        k--;
                    }
                    else{
                        cout << i << " ";
                    }
                }
                cout << "\n";
            }
        }
        else{
            if(k > n/2)
                cout << "-1\n";
            else{
                for(int i=1; i<=n; i++){
                    if(i%2 == 0 && k > 0){
                        cout << i+1 << " " << i << " ";
                        i++;
                        k--;
                    }
                    else{
                        cout << i << " ";
                    }
                }
                cout << "\n";
            }
        }
    }
    return 0;
}   