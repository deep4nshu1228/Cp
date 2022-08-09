#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,m;
    cin >> n >> m;

    int result = -1;

    if(m%n == 0){
        result = 0;
        int d = m/n;

        while(d%2 == 0){
            d /= 2;
            result++;
        }
        while(d%3 == 0){
            d/=3;
            result++;
        }
        if(d!=1)
            result = -1;
    }
    
    cout << result << "\n";
    return 0;
}