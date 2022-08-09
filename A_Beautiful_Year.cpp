#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin>>n;
    while(true){
        n = n+1;
        int temp = n;
        vector<int> a;
        while(temp>0){
            int rem = temp%10;
            a.push_back(rem);
            temp=temp/10;
        }
        int count=0;
        for(int i=0; i<a.size(); i++){
            for(int j=0; j<a.size(); j++){
                if(a[i]==a[j] && i!=j){count++; break;}
            }
            if(count>0){break;}
        }
        if(count==0){cout<<n<<"\n"; break;}
    }
    return 0;
}