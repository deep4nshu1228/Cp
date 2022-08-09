#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll x;
    cin >> x;
    vector<long long> set_bit_pos;
    long long pos=0,temp=x;
    while(temp){
        if(temp&1){
            set_bit_pos.push_back(pos);
        }
        temp>>=1;
        pos++;
    }
    if(set_bit_pos[0]==0){
        if(x==1){
            cout<<3<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    else{
        long long temp2 = pow(2,set_bit_pos[0]);
        if(set_bit_pos.size()>1){
            cout<<temp2<<endl;
        }
        else{
            cout<<temp2+1<<endl;
        }
    }
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}