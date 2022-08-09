#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    string s1, s2; 
    cin >> s1 >> s2;

    int h1 = (s1[0]-'0')*10 + (s1[1]-'0');
    int m1 = (s1[3]-'0')*10 + (s1[4]-'0');
    int h2 = (s2[0]-'0')*10 + (s2[1]-'0');
    int m2 = (s2[3]-'0')*10 + (s2[4]-'0');
    
    // cout<<setw(2)<<setfill('0');
    int diff1 = h1-h2;
    int diff2 = m1-m2;

    if(diff2 < 0){
        diff2+=60;
        diff1--;
    }
    if(diff1<0){
        diff1+=24;
    }
    
    printf("%02d:%02d",diff1,diff2);
    printf("\n");
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}