#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,k; cin>>n>>k;
    while(k--){
        if(n%10 == 0){
            n = n/10;
        }
        else{
            n = n-1;
        }
    }
    cout<<n<<"\n";
    return 0;
}