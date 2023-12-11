#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;
    cin>>n;

    if(n==2 || n==3)
        cout<<"NO SOLUTION"<<endl;
    else{
        ll odd, even;
        if(n&1){
            odd = n;
            even = n-1;
        }else{
            even = n;
            odd = n-1;
        }
        for(ll i=odd;i>0;i-=2){
            cout<<i<<" ";
        }
        for(ll i=even;i>0;i-=2){
            cout<<i<<" ";
        }
    }
    return 0;
}