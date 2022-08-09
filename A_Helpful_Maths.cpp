#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    cin>>s;
    // vector<char> a;
    // for(int i=0; i<s.length(); i = i+2){
    //     a.push_back(s[i]);
    // }
    // sort(all(a));
    // int index = 0;
    // for(int i=0; i<s.length(); i=i+2){
    //     s[i] = a[index];
    //     index++;
    // }
    // cout<<s<<"\n";

    /*
    * By counting
    */
    int one = count(all(s), '1');
    int two = count(all(s), '2');
    int three = count(all(s), '3');

    for(int i=1; i<=one; i++){cout<<"1"; if(i<one) cout<<"+";}
    if(two > 0 && one > 0) cout<<"+";
    for(int j=1; j<=two; j++){cout<<"2"; if(j<two) cout<<"+";}
    if(three > 0 && two > 0) cout<<"+";
    for(int k=1; k<=three; k++){cout<<"3"; if(k<three) cout<<"+";}
    return 0;
}