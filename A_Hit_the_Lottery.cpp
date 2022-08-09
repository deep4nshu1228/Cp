#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; 
    cin >> n;

    int cnt = 0;
    int x[] = {100,20,10,5,1};
    for(int i=0; i<5; i++){
        cnt += n/x[i];
        n %= x[i];
    }

    cout << cnt << "\n";
    return 0;
}