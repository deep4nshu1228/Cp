#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,m;
    cin >> n >> m;

    int count = 0;
    int i = 1;
    while(n--){
        count++;
        if(i*m == count){
            n++;
            i++;
        }
    }

    cout << count << "\n";
    return 0;
}