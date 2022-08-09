#include<bits/stdc++.h>
#define ll              long long
using namespace std;
int main()
{
    ll t,n;
    cin>>t;
    while(t--){
        ll f1 = 0,f2 = 0,s1 = 0,s2 = 0,ans = 0;
        string s;
        cin>>s;
        n = s.length();

        for(ll i=0; i<n; i++){
            if(s[i] == '(')f1++;
            else if(s[i] == ')'){
                if(f1){
                    f1--;
                    ans++;
                }
            }
            else if(s[i] == '[')s1++;
            else if(s[i] == ']'){
                if(s1){
                    s1--;
                    ans++;
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}