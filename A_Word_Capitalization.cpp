#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    if( (int)s[0] > 95){
        s[0] = (int)s[0] - 32;
    }
    cout<<s<<"\n";
    return 0;
}