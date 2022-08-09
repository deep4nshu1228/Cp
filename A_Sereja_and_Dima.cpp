#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int right = 0;
    int left = n-1;
    
    int sereja = 0;
    int dima = 0;
    for(int i=0; i<n; i++){
        if(i%2 == 0){
            if(a[right] > a[left]){
                sereja += a[right];
                right++;
            }
            else{
                sereja += a[left];
                left--;
            }
        }
        else{
            if(a[right] > a[left]){
                dima += a[right];
                right++;
            }
            else{
                dima += a[left];
                left--;
            }
        }
    }

    cout << sereja << " " << dima << "\n";
    return 0;
}