#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int k,r;
    cin >> k >> r;

    for(int i = 1; i< 11; i++){
        int x = k*i;

        if(x%10 == 0 || x%10 == r){
            cout << i << "\n";
            break;
        }
    }
    return 0;
}s