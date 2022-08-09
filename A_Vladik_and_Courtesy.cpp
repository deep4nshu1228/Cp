#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int a,b; 
    cin >> a >> b;

    int n = max(a,b);
    int i = 1;
    while(1){
                if(i>a)
        {
            cout<<"Vladik";
            return;
        }

        else
        {
            a-=i;
            i++;
        }
        if(i>b)
        {
            cout<<"Valera";
            return;
        }

        else
        {
            b-=i;
            i++;
        }
    }
}
int main()
{
    solve();
    return 0;
}