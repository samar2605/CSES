#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);


    ll n;
    cin>>n;

    vector<ll> arr(n);
    unordered_map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=i;
    }
    
    ll ans =1;
    for(ll i=2;i<=n;i++){
        if(mp[i]<mp[i-1])
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}