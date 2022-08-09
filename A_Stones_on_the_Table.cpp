#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin>>n;
    string s; cin>>s;

    int count=0;
    for(int i=0; i<n-1; i++){
        if(s[i]=='R' && s[i+1] == 'R') { count++;}
        if(s[i]=='G' && s[i+1] == 'G') { count++;}
        if(s[i]=='B' && s[i+1] == 'B') { count++;}
    }
    cout<<count<<"\n";
    return 0;
}