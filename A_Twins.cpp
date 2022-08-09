#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin>>n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        a.push_back(x);
    }
    sort(all(a));
    int count=0;
    for (int i = a.size()-1; i >=0; i--)
    {
        int y=0;
        for (int k = 0; k < i; k++)
        {
            y=y+a[k];
        }
        int x=0;
        for (int j = n-1; j >= i; j--)
        {
            x = x+a[j];
        }
        
        if(x>y){
            count = i;
            break;
        }
    }
    cout<<(n-count)<<"\n";
    
    return 0;
}