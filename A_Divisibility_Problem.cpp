#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin>>t;
    while(t--){
        int a,b;
        cin >> a >> b;
        
        if(a%b == 0) { cout << "0\n"; }
        else { cout << b - a%b << "\n"; }
    }
    return 0;
}