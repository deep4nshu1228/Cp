#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k; cin>>n>>k;
    vector<int> a;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        a.push_back(x);
    }
    int value = a[k-1];
    int count= 0;
    for(int i=1; i<=n; i++){
        if(a[i-1]>=value && a[i-1]>0){
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}