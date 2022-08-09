#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    ll tcase; cin>>tcase;
    while(tcase--){
        ll a, b;    cin>>a>>b;
        ll k=a/b;
        for(int i=0,m=0; i<a; i++){
            for(int j=0; j<k && i<a ;i++, j++){
                char c= 'a'+m;
                cout<<c;
            }
            i--;m++;
            if(m==b)m=0;
        }
        cout<<endl;
    }
    return 0;
}