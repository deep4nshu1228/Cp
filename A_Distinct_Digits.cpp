#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
        int l,r;
        cin >> l >> r;

        bool continue_loop = true;
        while(continue_loop && l<=r){
            int temp = l;
            int a[10];
            for(int i=0; i<10; i++){
                a[i] = 0;
            }
            while(temp > 0){
                a[temp%10]++;
                temp/=10;
            }

            bool ans_found = true;
            for(int i=0; i<10; i++){
                if(a[i] > 1){
                    ans_found = false;
                    break;
                }
            }
            if(ans_found) continue_loop = false;
            else l++;
        }

        if(l > r)
            cout << "-1\n";
        else
            cout << l << "\n";

        
    return 0;
}