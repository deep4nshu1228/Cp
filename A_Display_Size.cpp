#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int arr[10000000];
void solve(){
    int n,i,c,k;

    while (cin >> n)
    {
        c = 0, k = 0;

        for (i=1; i<=n; i++)
        {
            if (n % i == 0)
            {
                arr[k] = i;
                k = k + 1;;
                c = c + 1;
            }
        }

        c = c - 1;

        if (c & 1)
            printf ("%d %d\n",arr[c/2],arr[c/2+1]);
        else
            printf ("%d %d\n",arr[c/2],arr[c/2]);
    }

}
int main()
{
    solve();
    return 0;
}