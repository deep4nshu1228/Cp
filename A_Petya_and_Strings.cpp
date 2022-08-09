#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    string a,b; cin>>a>>b;

    for(int i=0; i<a.length(); i++){
        if((int)a[i] < 97 ){ a[i] = (int)a[i] + 32;}
        if((int)b[i] < 97 ){ b[i] = (int)b[i] + 32;}
    }

    if(a == b){
        cout<<"0\n";
    }
    else if(a>b){
        cout<<"1\n";
    }
    else{
        cout<<"-1\n";
    }
    return 0;
}