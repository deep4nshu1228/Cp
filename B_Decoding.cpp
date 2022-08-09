#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    string s; cin >> s;

    char ans[n];
    if(n%2 != 0){
        int j=n/2-1;
        int k = n/2+1;
        ans[n/2] = s[0];
        for(int i=1; i<n; i++){
            if(i%2 == 1){
                ans[j] = s[i];
                j--;
            }
            else{
                ans[k] = s[i];
                k++;
            }
        }
    }
    else{
        int j=n/2-1;
        int k=n/2;
        for(int i=0; i<n; i++){
            if(i%2 == 0){
                ans[j] = s[i];
                j--;
            }
            else{
                ans[k] = s[i];
                k++;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << ans[i];
    }
    cout << "\n";
    return 0;
}