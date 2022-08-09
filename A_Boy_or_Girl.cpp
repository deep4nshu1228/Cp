#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0; i<s.length(); i++){
        m[s[i]]++;
    }
    if(m.size()%2==0){cout<<"CHAT WITH HER!";}
    else{ cout<<"IGNORE HIM!";}
    return 0;
}