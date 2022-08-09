#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

bool prime(int n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int n; cin >> n;
    int cnt = 0;
    for(int x=6; x<=n; x++){
        vector<int> div;

        for(int i=2; i<=x; i++){
            if(x%i == 0) 
                div.push_back(i);
        }

        int k = 0;
        for(int i=0; i<div.size(); i++){
            if(prime(div[i]))
                k++;
        }

        if(k == 2)
            cnt++;
    }

    cout << cnt << "\n";
    return 0;
}