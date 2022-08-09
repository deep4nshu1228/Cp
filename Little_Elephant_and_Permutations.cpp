#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        // int inv = 0, local_inv = 0;
        // for(int i=0; i<n; i++){
        //     if(i<(n-1)){
        //         if(a[i]>a[i+1]){
        //             local_inv++;
        //         }
        //     }
        //     for(int j=i+1; j<n; j++){
        //         if(a[i]>a[j]){
        //             inv++;
        //         }
        //     }
        // }

        // if(inv==local_inv){
        //     cout<<"YES\n";
        // }
        // else{
        //     cout<<"NO\n";
        // }


        /*
        *    O(n) solution
        */
        int i=1;
        while(i<=n){
            if(a[i-1]>a[i]){
                swap(a[i-1],a[i]);
                i++;
            }
            i++;
        }
        int ans=1;
        for(int i=1;i<=n;i++){
            if(a[i-1]>a[i]){
                ans=0;
                break;
            }
        }
        if(ans==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}