#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int a,b;
    cin >> a >> b;
    
    int x = a/b + a%b;
    int count = a/b;
    while(x >= b){
        count+= x/b;
        x = x/b + x%b;
    }
    cout << count + a << "\n";
    return 0;
}