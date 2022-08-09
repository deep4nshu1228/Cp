#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        int half = s.length()/2;
        string s1,s2;
        for (int i = 0; i < s.length(); i++)
        {
            if(s.length()%2==0){
                if(i<half){ s1.push_back(s[i]);}
                if(i>=half){ s2.push_back(s[i]);}
            }
            else{
                if(i<half){ s1.push_back(s[i]);}
                if(i>half){ s2.push_back(s[i]);}
            }
        }
        
        map<char,int> m1;
        map<char,int> m2;

        for(int j=0; j<half; j++){
            m1[s1[j]]++;
            m2[s2[j]]++;
        }
        if(m1==m2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
    return 0;
}