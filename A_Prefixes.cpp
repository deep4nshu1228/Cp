#include<bits/stdc++.h>
using namespace std;
     
int main()
{
    int i, j, k;
    int n, m;
     
    string s;
    cin >> n >> s;
        
    m = 0;
    for(i = 0; i < n; i += 2){
        if(s[i] == 'a' && s[i + 1] == 'a')
            m++, s[i] = 'b';
        else if(s[i] == 'b' && s[i + 1] == 'b')
            m++, s[i] = 'a';
    } 
        
    cout << m << "\n";
    cout << s;
     
    return 0;
}
