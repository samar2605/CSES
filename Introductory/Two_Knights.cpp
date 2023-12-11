#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll t;
    cin>>t;
    cout<<0<<endl;
    
    ll num=0;
    for(ll i=2;i<=t;i++){
        num = ((i*i)*(i*i-1)/2) - 4*(i-1)*(i-2);
        cout<<num<<endl;
    }
    return 0;
}