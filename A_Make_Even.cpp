#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        // ll n;
        // cin >> n;

        // if(n%2 == 0){
        //     cout << 0 << "\n";
        //     continue;
        // }


        // ll temp = n;
        // bool even_number = false;
        // int pos = 0;
        // int digits = 0;
        // while(temp>0){
        //     digits++;
        //     ll rem;
        //     rem = temp%10;
        //     if(rem%2 == 0){even_number = true; pos = digits;}
        //     temp = temp/10;
        // }

        // if(even_number){
        //     if(pos == digits){
        //         cout << 1 << "\n";
        //     }
        //     else{
        //         cout << 2 << "\n";
        //     }
        // }
        // else{
        //     cout << -1 << "\n";
        // }

        string n;
        cin >> n;

        if((n.back() - '0')%2 == 0){
            cout << 0 << "\n";
            continue;
        }

        if((n[0] - '0')%2 == 0){
            cout << 1 << "\n";
            continue;
        }

        int count_2 = count(all(n),'2');
        int count_4 = count(all(n),'4');
        int count_6 = count(all(n),'6');
        int count_8 = count(all(n),'8');

        if(count_2 > 0 || count_4 > 0 || count_6 > 0 || count_8 > 0){
            cout << 2 << "\n";
        }
        else{
            cout << -1 << "\n";
        }
        
    }
    return 0;
}