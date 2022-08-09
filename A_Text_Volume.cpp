#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,i,maxi,k;
    string str;

    while (cin >> n)
    {
        getchar();
        getline (cin,str);

        maxi = k = 0;

        for (i=0; i<n; i++)
        {
            if (isupper(str[i]))
                k++;

            maxi = max (k,maxi);

            if (str[i] == ' ')
                k = 0;
        }

        cout << maxi << endl;
    }
}
int main()
{
    solve();
    return 0;
}