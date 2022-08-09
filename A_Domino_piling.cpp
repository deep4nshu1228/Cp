#include <iostream>
using namespace std;

int main()
{
    int n,m; cin>>n>>m;
    int area_of_board = n*m;
    int area_of_domino = 2*1;
    if(area_of_board % 2 == 0){
        cout<<area_of_board/area_of_domino<<"\n";
    }
    else{
        cout<<(area_of_board-1)/area_of_domino<<"\n";
    }
    return 0;
}