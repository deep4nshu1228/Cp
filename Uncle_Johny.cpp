#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a;
        while(n--){
            int x; cin>>x;
            a.push_back(x);
        }
        int k; cin>>k;
        int value = a[k-1];
        sort(a.begin(),a.end());
        for(int i=1; i<=a.size(); i++){
            if(a[i-1]==value){ cout<<i<<"\n";}
        }

    }
    return 0;
}