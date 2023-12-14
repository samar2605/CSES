#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){
        ll x,y;
        cin>> y>>x;
        
        if(y>=x){
            if(y&1){
                cout<<(y-1)*(y-1)+x<<endl;
            }else{
                cout<<y*y-(x-1)<<endl;
            }
        }else{
            if(x&1){
                cout<<x*x-(y-1)<<endl;
            }else{
                cout<<(x-1)*(x-1)+y<<endl;
            }
        }
    }

    return 0;
}