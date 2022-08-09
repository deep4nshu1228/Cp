#include <bits/stdc++.h>
using namespace std;
#define all(n) (n).begin(), (n).end()
typedef long long int ll;
int main()
{
    int t; cin>>t;
    // int x=0;
    // while(t--){
    //     string s; cin>>s;
    //     if(s == "++X" || s == "X++"){ ++x;}
    //     else{ --x;}
    // }
    // cout<<x<<"\n";


    /*
    *   Implementation using vector
    */
    vector<string> a(t);
    for(int i=0; i<t; i++){
        cin>>a[i];
    }

    cout<<count(all(a),"X++")+count(all(a),"++X")-count(all(a),"--X")-count(all(a),"X--")<<"\n";
    return 0;
}