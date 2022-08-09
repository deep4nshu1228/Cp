#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,m;
    cin >> n >> m;
    // int i = 0;
    // while(n>0 && m>0){
    //     n--;
    //     m--;
    //     i++;
    // }

    int i = n<m?n:m;
    if(i%2 == 0){
        cout << "Malvika\n";
    }
    else{
        cout << "Akshat\n";
    }

    return 0;
}