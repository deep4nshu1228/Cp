#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int isVowel(char c){
    char a[]  = {'a','e','i','o','u','y'};
    for(int i = 0; i < 6; i++){
        if(c == a[i]){
            return 1;
        }
    }
    return 0;
}
int main()
{
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if((int)s[i] < 97){ s[i] = (int)s[i] + 32; }
    }

    
    for(int i = 0; i < s.length(); i++){
        if(isVowel(s[i])){ continue; }
        else { cout << "." << s[i];}
    }
    cout << "\n";
    return 0;
}