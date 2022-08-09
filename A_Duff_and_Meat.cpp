#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,a,p;
    int money = 0, price = 101;
    cin >> n;
    while(n--){
        cin >> a >> p;
        if(price > p) price = p; 
        money += price * a;
    }
    printf("%d",money);
    return 0;
}
