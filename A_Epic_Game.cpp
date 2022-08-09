#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
int main()
{
    int a,b,n;
    cin >> a >> b >> n;

    int i = 0;
    while(true){
        if(i%2 == 0){
            if(n - gcd(a,n) >= 0){
                n = n - gcd(a,n);
            }
            else{
                cout << 1 << endl;
                break;
            }
            i++;
        }
        else{
            if(n - gcd(b,n) >= 0){
                n = n - gcd(b,n);
            }
            else{
                cout << 0 << endl;
                break;
            }
            i++;
        }
    }

    return 0;
}