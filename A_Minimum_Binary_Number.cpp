#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll n, ones = 0, zeros = 0;
    string s;
    cin>>n>>s;
    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            ones++;
        }
        else{
            zeros++;
        }
    }
    if(ones == 1){
        cout<<s<<endl;
    }
    else{
        if(ones)cout<<1;
        while(zeros--)cout<<0;
        cout<<endl;
    }
}
int main()
{
    solve();
    return 0;
}