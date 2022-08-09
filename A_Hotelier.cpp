#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    int a[10] = {0,0,0,0,0,0,0,0,0,0};
    int i=0,j=9;
    string s; cin >> s;

    for(int i=0; i<n; i++){
        if(s[i]=='L'){
            for(int i=0; i<10; i++){
                if(a[i]==0){
                    a[i] = 1;
                    break;
                }
            }
        }
        else if(s[i]=='R'){
            for(int i=9; i>=0; i--){
                if(a[i]==0){
                    a[i]=1;
                    break;
                }
            }
        }
        else{
            a[s[i]-'0'] = 0;
        }
    }

    for(int i=0; i<10; i++){
        cout << a[i];
    }
    cout << endl;
}
int main()
{
    solve();
    return 0;
}