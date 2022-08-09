#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin>>n;
    int h; cin>>h;

    // vector<int> a;
    // for(int i=0; i<n; i++){
    //     int x; cin>>x;
    //     a.push_back(x);
    // }

    // int x=0,y=0;
    // for(int i=0; i<a.size(); i++){
    //     if(a[i]>h){x++;}
    //     else{y++;}
    // }
    // cout<<(2*x+y)<<endl;

    /*
    *   MORE EFFICIENT METHOD
    */
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(x>h){ans++;}
    }
    cout<<ans<<"\n";
    return 0;
}