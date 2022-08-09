#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

void solve(){
    vector<int> a(5);
    int sum = 0;
    for(auto &it: a){
        cin >> it;
        sum += it;
    }

    int s = sum;
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(a[i] == a[j]){
                s = min(s, sum-2*a[i]);
            }
        }
    }
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            for(int k=j+1; k<5; k++){
                if(a[i] == a[j] && a[i] == a[k]){
                    s = min(s, sum-3*a[i]);
                }
            }
        }
    }

    cout << s << "\n";
}
int main()
{
    solve();
    return 0;
}