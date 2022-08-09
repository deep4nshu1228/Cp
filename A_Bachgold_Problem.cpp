#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;

    if(n%2 == 0){
        int x = n/2;
        cout << x << "\n";
        for(int i=0; i<x; i++){
            cout << 2 << " ";
        }
        cout << "\n";
    }
    else{
        int x = (n-1)/2;
        cout << x << "\n";
        for(int i=0; i<x-1; i++){
            cout << 2 << " ";
        }
        cout << 3 << "\n";
    }
    return 0;
}