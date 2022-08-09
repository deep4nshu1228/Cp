#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
bool isPrime(int n){
    if(n<2) return false;
    if(n%2==0) return false;
    for(int i=3; i*i<n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        
        int x = 0;
        for(int i = 0; i < s.length()-1; i++){
            if((s[i] == '1' && s[i+1] == '0') || (s[i] == '1' && s[i+1] == '1')){
                cout << "Yes\n";
                x = 1;
                break;
            }
        }
        if(x==0) { cout << "No\n";}
    }
    return 0;
}