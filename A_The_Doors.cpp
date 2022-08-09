#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ll temp,n,pos;
    vector<long long> doors;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        doors.push_back(temp);
    }
    bool check=false;
    if(doors[n-1]==1)
        check=true;
    for(ll i=n-2;i>=0;i--)
    {
        if(check && doors[i]==0)
        {
            pos=i+1;
            break;
        }
        else if(!check && doors[i]==1)
        {
            pos=i+1;
            break;
        }
    }
    cout<<pos<<endl;
    return 0;
}
