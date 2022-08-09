#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin>>n;
    string s; cin>>s;
    int a=0;
    for(int i=0; i<n; i++){
        if(s[i]=='A'){a++;}
    }
    int d=n-a;
    if(d>a){cout<<"Danik\n";}
    else if(a>d){cout<<"Anton\n";}
    else{cout<<"Friendship\n";}
    return 0;
}