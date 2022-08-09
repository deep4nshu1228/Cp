#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
bool prime(int x){
    if(x%2 == 0) return false;
    for(int i = 3; i*i <= x; i+=2){
        if(x%i == 0) return false;
    }
    return true;
}
int main()
{
    int n,m;
    cin >> n >> m;

    bool inBetween = false;

    if(!prime(m)){
        cout <<"NO\n";
    }
    else{
        int k;
        if(n==2) k = n+1;
        else k = n+2;
        for(int i=k; i<m; i++){
            if(prime(i)){ inBetween = true; break; }
        }

        if(inBetween){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}