#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool isValid(vector<vector<char>>& grid, ll r, ll c){
    if(grid[r][c]=='*')
        return false;
    // vertical
    ll i=r, j=c;
    while(i>=0){
        if(grid[i][c]=='q')
            return false;
        i--;
    }   
    //upper left
    i=r;j=c;
    while(i>=0 && j>=0){
        if(grid[i][j]=='q')
            return false;
        i--;
        j--;
    }
    // upper right
    i=r;j=c;
    while(i>=0 && j<8){
        if(grid[i][j]=='q')
            return false;
        i--;
        j++;
    }
    return true;
}

void NQueen(vector<vector<char>>& grid,ll& ans, ll r){
    if(r>=8){
        ans++;
        return;
    }
    for(ll i=0;i<8;i++){
        if(isValid(grid,r,i))
        {
            char ch=grid[r][i];
            grid[r][i]='q';
            NQueen(grid,ans,r+1);
            grid[r][i]=ch;
        }    
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    vector<vector<char>> grid(8, vector<char>(8,0));

    for(ll i=0;i<8;i++){
        for(ll j=0;j<8;j++){
            cin>>grid[i][j];
        }
    }

    ll ans =0;
    NQueen(grid, ans,0);
    cout<<ans<<endl;
    
    return 0;
}