#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    if(a[0]%2 == a[1]%2){
        if(a[0]%2 == 0){
            for(int i = 2; i < n; i++){
                if(a[i]%2 != 0){
                    cout << i+1 << "\n";
                    break;
                }
            }
        }
        else{
            for(int i = 2; i < n; i++){
                if(a[i]%2 == 0){
                    cout << i+1 << "\n";
                    break;
                }
            }
        }
        
    }
    else{
        if(a[2]%2==0){
            for(int i = 0; i < n; i++){
                if(a[i]%2 != 0){
                    cout << i+1 << "\n";
                    break;
                }
            }
        }
        else{
            for(int i = 0; i < n; i++){
                if(a[i]%2 == 0){
                    cout << i+1 << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}