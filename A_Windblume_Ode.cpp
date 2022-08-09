#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

bool isPrime(int n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        int s = 0;
        vector<int> a(n);
        for(auto &it: a){ 
            cin >> it;
            s += it;
        }

        if(!isPrime(s)){
            cout << n << "\n";
            for(int i=1; i<=n; i++){
                cout << i << " ";
            }
            cout << "\n";
        }

        else{
            int check = true;
            cout << n-1 << "\n";
            for(int i=1; i<=n; i++){
                if(a[i-1]%2 != 0 && check){
                    check = false;
                }
                else{
                    cout << i << " ";
                }
            }
            cout << "\n";
        }

    }
    return 0;
}