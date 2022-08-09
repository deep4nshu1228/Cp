#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int r,c; 
    cin >> r >> c; 
    
    char a[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> a[i][j];
        }
    }

    // set<pair<int,int>> index;
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         if(a[i][j] == 'S'){
    //             index.insert(make_pair(i,j));
    //         }
    //     }
    // }

    // set<pair<int,int>> ans;
    // for(int i=0; i<index.size(); i++){
    //     for(int j=i+1; j<index.size(); j++){
    //         ans.insert(make_pair(index[i].first, index[j].second));
    //     }
    // }

    set<int> row;
    set<int> column;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(a[i][j] == 'S'){
                row.insert(i);
                column.insert(j);
            }
        }
    }


    cout << (r*c) - (row.size()*column.size()) <<"\n";
    return 0;
}