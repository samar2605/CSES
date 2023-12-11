#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007 

ll power(ll n,ll x){
    if(x==0)
        return 1;
    else if(x&1)
        return (n*(power(n,x-1)%MOD))%MOD;
    else 
        return ((power(n,x/2)%MOD)*(power(n,x/2)%MOD))%MOD;
    
}
int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;
    cin>>n;
    cout<<power(2,n);
    return 0;
}