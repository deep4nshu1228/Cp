#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;

    int count = 1;
    for(int i=2; i<=n/2; i++){
        if((n-i)%i == 0){
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}