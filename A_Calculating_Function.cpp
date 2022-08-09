#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin >> n;
    ll function;
    if(n%2 == 0){
        function = n/2;
    }
    else{
        function = (n/2) - n;
    }
    cout << function << "\n";
    return 0;
}