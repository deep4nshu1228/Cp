#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n; 
        vector<int> a(n);
        for(auto &it: a) cin >> it;

        // int b[201];
        // for(int i=0; i<201; i++){
        //     b[i]=0;
        // }
        // for(int i=0; i<a.size(); i++){
        //     b[a[i]+100]++;
        // }
        // int count = 0;
        // for(int i = 0; i<201; i++){
        //     if(b[i] == 1 || (b[100] > 0 &&i == 100)){
        //         count+=1;
        //     }
        //     else if(b[i] > 1){
        //         if(b[200-i] > 0){
        //             count+=1;
        //         }
        //         else{
        //             count+=2;
        //         }
        //     }
        // }
        // cout << count << "\n";

        /* we can take |x| and if x = 0; ans = min(1,x)
        *  for x!= 0 ; ans = min(2,x)
        */
        int mod_x[101] = {0};
        for(int i=0; i<a.size(); i++){
            mod_x[abs(a[i])]++;
        }
        
        int count = 0;
        for(int i=0; i<101; i++){
            if(i==0) count += min(1,mod_x[0]);
            else count += min(2,mod_x[i]);
        }
        cout << count << "\n";
    }
    return 0;
}