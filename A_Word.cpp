#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    string s; cin>>s;
    int lowerCase = 0,upperCase = 0;
    for(int i=0; i<s.length(); i++){
        if((int)s[i]>96){ lowerCase++;}
        else{ upperCase++;}
    }

    if(lowerCase >= upperCase){
        for(int i=0; i<s.length();i++){
            if((int)s[i]<97){s[i]=s[i]+32;}
        }
    }
    else{
        for(int i=0; i<s.length();i++){
            if((int)s[i]>96){s[i]=s[i]-32;}
        }
    }

    cout<<s<<"\n";
    return 0;
}